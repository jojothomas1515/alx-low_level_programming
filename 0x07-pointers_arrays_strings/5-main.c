#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char *s = "hello, worwwwor hello my man ss jjo dfjkd joj ojo jojo world";
	char *f = "jojo";
	char *t;

	t = _strstr(s, f);
	printf("%s\n", t);
	return (0);
}
