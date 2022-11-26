#include <stdio.h>

void __attribute__((constructor)) print_line(void);

/**
 * print_line - prints a string
 */

void print_line(void)
{
	char *str = "You're beat! and yet, you must allow,\n";

	printf("%s I bore my house upon my back!\n", str);
}
