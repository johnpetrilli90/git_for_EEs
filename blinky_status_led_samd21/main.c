#include <atmel_start.h>
#include "irq.h"
#include "led.h"

extern volatile uint32_t g_board_millis;

int main(void)
{
	/* Initializes MCU, drivers and middleware */
	atmel_start_init();
	irq_systick_init();

	/* Replace with your application code */
	while (1) {
		led_blink_status_led();
	}
}
