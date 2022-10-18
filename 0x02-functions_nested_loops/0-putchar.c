#include <stdio.h>
#include "main.h"

/**
 * main - Entry point for my program
 *
 * Description: This program use a while loop to print putchar
 * Return: 0
 */

int main(void)
{
	char *c = "_putchar";

	while (*c)
	{
		_putchar(*c);
		c++;
	}
	_putchar('\n');
	return (0);

}
