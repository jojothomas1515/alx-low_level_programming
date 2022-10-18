#include <stdio.h>
#include "main.h"

/**
 * print_alphabets - print the english alphabets
 *
 * Description: this program prints out the all lower alphabets
 */

void print_alphabet(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		_putchar(alpha);
		alpha++;
	}
	_putchar('\n');
}
