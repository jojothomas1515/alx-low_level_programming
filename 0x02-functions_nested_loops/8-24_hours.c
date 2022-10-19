#include "main.h"

/**
 * jack_bauer - print every min of the day
 *
 * Description : print every min of the day
 * Return: nothing
 */

void jack_bauer(void)
{
	int hour = 0;
	int min;

	while (hour < 24)
	{
		min = 0;
		while (min < 60)
		{
			_putchar((hour / 10) + 48);
			_putchar((hour % 10) + 48);
			_putchar(':');
			_putchar((min / 10) + 48);
			_putchar((min % 10) + 48);
			_putchar('\n');
			min++;
		}
		hour++;
	}
}
