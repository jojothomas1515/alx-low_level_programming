#include <stdio.h>

void __attribute__((constructor)) print_line(void);

/**
 * main - entry point for my program
 * Return: 0
 */

int main(void)
{
	printf("(A tortoise, having pretty good sense of\
	a hare's nature, challenges one to a race.)\n");
	return (0);
}

/**
 * print_line - prints a string
 */
void print_line(void)
{
	printf("You're beat! and yet, you must allow,\nI \
	bore my house upon my back!\n");
}
