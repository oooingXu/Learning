#include <lightsss.h>

pid_t LightSSS::p_pid = -1;
std::deque<pid_t> LightSSS::pidSlot = {};
ForkShareMemory LightSSS::forkshm;

ForkShareMemory::ForkShareMemory() {
  if ((key_n = ftok(".", 's') < 0)) {
    perror("Fail to ftok\n");
    FAIT_EXIT
  }

  if ((shm_id = shmget(key_n, 1024, 0666 | IPC_CREAT)) == -1) {
    perror("shmget failed...\n");
    FAIT_EXIT
  }

  void *ret = shmat(shm_id, NULL, 0);
  if (ret == (void *)-1) {
    perror("shmat failed...\n");
    FAIT_EXIT
  } else {
    info = (shinfo *)ret;
  }

  info->flag = false;
  info->notgood = false;
	info->is_p_dead = false;
  info->endCycles = 0;
  info->oldest = 0;
}

ForkShareMemory::~ForkShareMemory() {
  if (shmdt(info) == -1) {
    perror("detach error\n");
  }
  shmctl(shm_id, IPC_RMID, NULL);
}

void ForkShareMemory::shwait() {
  while (true) {
    if (info->flag) {
      if (info->notgood)
        break;
      else
        exit(0);
    } else {
			if(info->is_p_dead) {
				exit(0);
			} else {
      sleep(WAIT_INTERVAL);
			}
    }
  }
}

void LightSSS::signal_handler(int signum) {
	forkshm.info->is_p_dead = true;
	exit(EXIT_FAILURE);
}

void LightSSS::signal_handler_abort(int signum) {
	if(p_pid != getpid()) return;

	if(pidSlot.empty()) return;

	FORK_PRINTF("handler abort signum: %d, pidSlot size: %ld\n", signum, pidSlot.size());
	forkshm.info->endCycles = -1;
	forkshm.info->oldest = pidSlot.back();

	for(auto pid = pidSlot.begin(); pid != pidSlot.end(); ) {
		if(*pid != forkshm.info->oldest) {
			kill(*pid, SIGKILL);
			waitpid(*pid, NULL, 0);
			pid = pidSlot.erase(pid);
		} else {
			pid++;
		}
	}

	fflush(stdout);
	fflush(stderr);

	forkshm.info->notgood = true;
	forkshm.info->flag = true;
	int status = -1;

	waitpid(pidSlot.back(), &status, 0);

	exit(EXIT_FAILURE);
}

int LightSSS::do_fork() {
  //kill the oldest blocked checkpoint process
	//printf(ANSI_FMT("do fork: kill\n", ANSI_FG_BLUE));
  if (slotCnt == SLOT_SIZE) {
    pid_t temp = pidSlot.back();
		//FORK_PRINTF("do_forkchild: clear pid = %d...\n", temp)
    pidSlot.pop_back();
    kill(temp, SIGKILL);
    int status = 0;
    waitpid(temp, NULL, 0);
    slotCnt--;
  }
  // fork a new checkpoint process and block it
	//printf(ANSI_FMT("do fork: fork\n", ANSI_FG_BLUE));
  if ((pid = fork()) < 0) {
    eprintf("[%d]Error: could not fork process!\n", getpid());
    return FORK_ERROR;
  }
  // the original process
  else if (pid != 0) {
		//FORK_PRINTF("do_fork: no_child create pid = %d...\n", pid)
    slotCnt++;
    pidSlot.push_front(pid);
    return FORK_OK;
  }
  // for the fork child
	//printf(ANSI_FMT("do fork: fork child\n", ANSI_FG_BLUE));
  waitProcess = 1;
  forkshm.shwait();
  //checkpoint process wakes up
  //start wave dumping
  if (forkshm.info->oldest != getpid()) {
    FORK_PRINTF("Error, non-oldest process should not live. Parent Process should kill the process manually.\n")
    return FORK_ERROR;
  }
	//printf(ANSI_FMT("do fork: child\n", ANSI_FG_BLUE));
  return FORK_CHILD;
}

int LightSSS::wakeup_child(uint64_t cycles) {
  forkshm.info->endCycles = cycles;
  forkshm.info->oldest = pidSlot.back();

  // only the oldest is wantted, so kill others by parent process.
  for (auto pid: pidSlot) {
    if (pid != forkshm.info->oldest) {
			FORK_PRINTF("wakeup child: clear pid = %d...\n", pid)
      kill(pid, SIGKILL);
      waitpid(pid, NULL, 0);
    }
  }
  // flush before wake up child.
  fflush(stdout);
  fflush(stderr);

  forkshm.info->notgood = true;
  forkshm.info->flag = true;
  int status = -1;
	FORK_PRINTF("wakeup child: before pid = %d, after pid = %d, p_pid = %d\n", getpid(), pidSlot.back(), p_pid)
  waitpid(pidSlot.back(), &status, 0);
  return 0;
}

bool LightSSS::is_child() {
  return waitProcess;
}

int LightSSS::do_clear() {
  FORK_PRINTF("clear processes...\n")
  while (!pidSlot.empty()) {
    pid_t temp = pidSlot.back();
		//FORK_PRINTF("do_clear: clear pidSlot pid = %d\n", temp)
    pidSlot.pop_back();
    kill(temp, SIGKILL);
    waitpid(temp, NULL, 0);
    slotCnt--;

  }

	//FORK_PRINTF("do_clear: child pid = %d, p_pid = %d\n", getpid(), p_pid)
	if(getpid() != p_pid) {
		//FORK_PRINTF("do_clear: clear child pid = %d\n", getpid())
  	kill(getpid(), SIGKILL);
  	waitpid(getpid(), NULL, 0);
	}

  return 0;
}
