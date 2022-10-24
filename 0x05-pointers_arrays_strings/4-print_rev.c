#include <string.h>
#include <stdio.h>

/**
 * print_rev - print the rev of the string
 * @s: the string variable to be evaluated
 */

void print_rev(char *s)
{
	printf("%s\n", (char)strrev(s));
}
