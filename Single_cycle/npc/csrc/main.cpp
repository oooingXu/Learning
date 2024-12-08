#include <nvboard.h>
#include <VGCD.h>

static TOP_NAME dut;

void nvboard_bind_all_pins(VGCD *GCD);

void single_cycle(){
	dut.clock = 0; dut.eval();
	dut.clock = 1; dut.eval();
}

void reset(int n){
	dut.reset = 1;
	while(n --> 0){
		single_cycle();
	}
	dut.reset = 0;
}

int main() {
  printf("Hello, ysyx!\n");

	nvboard_bind_all_pins(&dut);
	nvboard_init();

	reset(10);

	while(1){
		single_cycle();
	//dut.eval();
		nvboard_update();
	}
}
