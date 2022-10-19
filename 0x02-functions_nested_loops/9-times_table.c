#include "main.h"

/**
 * times_table - times table
 *
 * Description: the multiplication table
 * Return: 0
 */

void times_table(void)
{
	int m = 0, n;

	while (m < 10)
	{
		n = 0;
		while (n < 10)
		{
			int num = m * n;
			int fd = num / 10;
			int ld = num % 10;

			if (fd != 0)
			{
				_putchar(fd + 48);
			}

			if (fd == 0)
			{
				_putchar(ld + 48);
				if (n != 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
			}
			else
			{
				_putchar(ld + 48);
				if (n != 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			n++;
		}
		_putchar('\n');
		m++;
	}
}
