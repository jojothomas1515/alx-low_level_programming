#include "main.h"

/**
 * puts2 - print every even index character
 * @str: string to be process
 */

void puts2(char *str)
{
	int i;

	for(i = 0; str[i] != '\0'; i++)
	{
		if ((i % 2) == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
