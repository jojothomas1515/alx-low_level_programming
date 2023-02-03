#include "../main.h"

/**
 * _putchar - prints out a single character to the standard output
 * @c: character to print
 * Return: number of character outputed to stdout
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
