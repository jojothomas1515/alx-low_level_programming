#include <stdio.h>

/**
 * main - entry point of my program
 *
 * Description: This program prints all alphabet in lowercase and then uppercase
 * Return: returns 0 which means Success
 */

int main(void)
{
	char lower_char = 'a';
	char upper_char = 'A';

	while (lower_char <= 'z')
	{
		putchar(lower_char);
		lower_char++;
	}
	while (upper_char <= 'Z')
	{
		putchar(upper_char);
		upper_char++;
	}

	putchar('\n');
	return (0);
}
