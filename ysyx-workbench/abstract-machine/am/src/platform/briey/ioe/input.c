#include <am.h>
#include <briey.h>

#define KEYDOWN_MASK 0x8000

void __am_input_keybrd(AM_INPUT_KEYBRD_T *kbd) {
	if(kbd->keydown) {
		kbd->keycode = inb(KBD_ADDR);
	} else {
		kbd->keycode = AM_KEY_NONE;
	}
}
