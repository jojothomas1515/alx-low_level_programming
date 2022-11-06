#include "main.h"

/**
 * puts_half - this function prints half of a str
 * @str: string to be printed
 */

void puts_half(char *str)
{
	int len, half_len, i;

	/* to get the length of a string */
	for (len = 0; str[len] != '\0'; len++)
	{
		;
	}

	len = len - 1;
	half_len = len / 2;

	for (i = half_len + 1; i <= len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
