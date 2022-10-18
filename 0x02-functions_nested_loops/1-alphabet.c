#include <stdio.h>
#include "main.h"

/**
 * main - Entry point to my function
 *
 * Description: this program prints out the all lower alphabets
 * Return: 0
 */

int main(void)
{
	print_alphabet();
}

void print_alphabet(void)
{
	char alpha = 'a';

	while ( alpha <= 'z')
	{
		_putchar(alpha);
		alpha++;
	}
	_putchar('\n');
}
