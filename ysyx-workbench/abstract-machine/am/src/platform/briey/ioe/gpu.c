#include <am.h>
#include <briey.h>
#include <klib.h>

#define SYNC_ADDR (VGACTL_ADDR + 4)
#define N 32

void __am_gpu_init() {
	uint32_t screen_wh = inl(VGACTL_ADDR);
	uint32_t h = screen_wh & 0xffff;
	uint32_t w = screen_wh >> 16;
	int i;
	/*
	int w = ;
	int h = ;
	*/
	//printf("w = %d, h = %d\n", io_read(AM_GPU_CONFIG).width, io_read(AM_GPU_CONFIG).height);
	uint32_t *fb = (uint32_t *)(uintptr_t)FB_ADDR;
	for (i = 0; i < w * h; i ++) fb[i] = 0;
	  outl(SYNC_ADDR, 1);
}

void __am_gpu_config(AM_GPU_CONFIG_T *cfg) {
	uint32_t screen_wh = inl(VGACTL_ADDR);
	uint32_t h = screen_wh & 0xffff;
	uint32_t w = screen_wh >> 16;

  *cfg = (AM_GPU_CONFIG_T) {
    .present = true, .has_accel = false,
    .width = w, .height = h,
    .vmemsz = 0
  };
}

void __am_gpu_fbdraw(AM_GPU_FBDRAW_T *ctl) {
  int x = ctl->x, y = ctl->y, w = ctl->w, h = ctl->h;
  if(!ctl->sync && (w == 0 || h == 0)) return;

  uint32_t *pixels = ctl->pixels;
  uint32_t *fb = (uint32_t *)(uintptr_t)FB_ADDR;
  uint32_t screen_w = inl(VGACTL_ADDR) >> 16;

  // 优化1: 使用memcpy进行整行复制
  if (w == screen_w) {
    memcpy(fb + y * screen_w, pixels, w * h * sizeof(uint32_t));
  }
  // 优化2: 对于较大区域，使用8像素对齐的批量复制
  else if (w >= 8) {
    int w_aligned = w & ~7;  // 向下对齐到8的倍数
    for (int i = 0; i < h; i++) {
      uint32_t *dst = fb + (y + i) * screen_w + x;
      uint32_t *src = pixels + i * w;

      // 使用64位数据传输优化
      uint64_t *dst64 = (uint64_t *)dst;
      uint64_t *src64 = (uint64_t *)src;

      // 每次复制8个像素(64位)
      for (int j = 0; j < w_aligned; j += 8) {
        *dst64++ = *src64++;
        *dst64++ = *src64++;
        *dst64++ = *src64++;
        *dst64++ = *src64++;
      }

      // 处理剩余的像素
      for (int j = w_aligned; j < w; j++) {
        dst[j] = src[j];
      }
    }
  }
  // 优化3: 对于中等区域，使用4像素对齐的批量复制
  else if (w >= 4) {
    int w_aligned = w & ~3;
    for (int i = 0; i < h; i++) {
      uint32_t *dst = fb + (y + i) * screen_w + x;
      uint32_t *src = pixels + i * w;

      // 使用SIMD指令或展开循环
      for (int j = 0; j < w_aligned; j += 4) {
        dst[j] = src[j];
        dst[j+1] = src[j+1];
        dst[j+2] = src[j+2];
        dst[j+3] = src[j+3];
      }

      // 处理剩余的像素
      for (int j = w_aligned; j < w; j++) {
        dst[j] = src[j];
      }
    }
  }
  // 优化4: 对于小区域，直接复制
  else {
    for (int i = 0; i < h; i++) {
      uint32_t *dst = fb + (y + i) * screen_w + x;
      uint32_t *src = pixels + i * w;
      for (int j = 0; j < w; j++) {
        dst[j] = src[j];
      }
    }
  }

  if (ctl->sync) {
    outl(SYNC_ADDR, 1);
  }
}

/*
void __am_gpu_fbdraw(AM_GPU_FBDRAW_T *ctl) {
	int x = ctl->x, y = ctl->y, w = ctl->w, h = ctl->h;
	if(!ctl->sync && (w == 0 || h == 0)) return;

	uint32_t *pixels = ctl->pixels;
	uint32_t *fb = (uint32_t *)(uintptr_t)FB_ADDR;
	uint32_t screen_w = inl(VGACTL_ADDR) >> 16;

    // 优化1：一次处理多个像素
    if (w >= 4) {
        int w_aligned = w & ~3;  // 向下对齐到4的倍数
        for (int i = 0; i < h; i++) {
            uint32_t *dst = fb + (y + i) * screen_w + x;
            uint32_t *src = pixels + i * w;
            
            // 每次处理4个像素
            for (int j = 0; j < w_aligned; j += 4) {
                dst[j] = src[j];
                dst[j+1] = src[j+1];
                dst[j+2] = src[j+2];
                dst[j+3] = src[j+3];
            }
            
            // 处理剩余的像素
            for (int j = w_aligned; j < w; j++) {
                dst[j] = src[j];
            }
        }
    } else {
        // 对于小宽度，使用原始循环可能更快
        for (int i = 0; i < h; i++) {
            uint32_t *dst = fb + (y + i) * screen_w + x;
            uint32_t *src = pixels + i * w;
            for (int j = 0; j < w; j++) {
                dst[j] = src[j];
            }
        }
    }


	//for(int i = y; i < y + h; i++) {
	//	for(int j = x; j < w + x; j++) {
	//		fb[screen_w * i + j] = pixels[w * (i - y) + (j - x)];
	//	}
	//}
  if (ctl->sync) {
    outl(SYNC_ADDR, 1);
  }
}
*/

void __am_gpu_status(AM_GPU_STATUS_T *status) {
  status->ready = true;
}
