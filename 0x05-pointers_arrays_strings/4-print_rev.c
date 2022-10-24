#include <unistd.h>
#include <string.h>
/**
 * print_rev - print the rev of the string
 * @s: the string variable to be evaluated
 */

void print_rev(char *s)
{
	char newline = '\n';
	int len = strlen(s);
	int i;

	for (i = len; i > 0; i++)
	{
		write(1, (s+i), 1);
	}
	write(1, &newline, 1);
}