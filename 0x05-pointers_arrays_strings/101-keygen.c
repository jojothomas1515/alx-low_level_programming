#include "main.h"

/**
 * main - password generator for a program using checksum method
 * Return: 0 always
 */
int main(void)
{

	time_t *timer = NULL;
	int value, i = 0, upper, lower;

	upper = 122;
	lower = 48;
	srand(time(timer));

	while (i < 0xad4)
	{
		value = (rand() % (upper - lower + 1)) + lower;
		_putchar((char)value);
		i += value;
		if ((0xad4 - i) < 122 && (0xad4 - i) > 48)
		{
			upper = (0xad4 - i);
			_putchar((char)upper);
			i += upper;
		}
	}

	return (0);
}
