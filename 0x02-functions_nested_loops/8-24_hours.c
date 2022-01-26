/**
 * jack_bauer - program startup
(*
 * Description: prints every minute of the day
 * starting from 00:00 to 23:59)?
 */

#include "main.h"
void jack_bauer(void)
{
	int hour;
	int min;

	for (hour = 0; hour < 24; hour++)
	{
		for (min = 0; min < 60; min++)
		{
			_putchar((hour / 10) + '0');
			_putchar((hour % 10) + '0');
			_putchar(':');
			_putchar((min / 10) + '0');
			_putchar((min % 10) + '0');
			_putchar('\n');
		}

	}
}
