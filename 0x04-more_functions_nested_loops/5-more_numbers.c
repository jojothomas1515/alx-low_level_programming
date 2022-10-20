#include "main.h"

/**
 * more_numbers - print num 1 to 14 ten times
 *
 * Description: 1 - 14 with a newline ten times
 * Return: void
 */

void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if ((j / 10) != 0)
			{
				_putchar((j / 10) + 48);
			}
			_putchar((j % 10) + 48);
		}
		_putchar('\n');
	}
}