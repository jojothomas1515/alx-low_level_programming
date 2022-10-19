#include "main.h"

/**
 * print_times_table - times table
 * @num: the table size
 *
 * Description: the multiplication table
 * Return: 0
 */

void print_times_table(int num)
{
	int m = 0, n;

	while (m < (num + 1))
	{
		n = 0;
		while (n < (num + 1))
		{
			int num = m * n;
			int fd = num / 10;
			int ld = num % 10;

			if (fd != 0)
			{
				_putchar(fd + 48);
			}
			else if (n != 0)
			{
				_putchar(' ');
			}
			_putchar(ld + 48);

			if (n != num)
			{
				_putchar(',');
				_putchar(' ');
			}
			n++;
		}
		_putchar('\n');
		m++;
	}
}
