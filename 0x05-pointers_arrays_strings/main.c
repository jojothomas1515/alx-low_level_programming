#include <stdio.h>

void print_array(int *, int);

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	char *s = "301";
	int count = 0, i = 0;
	while (*s != '\0')
	{
		count++;
		s++;
	}
	s = s - count;

	while (i < count)
	{

	}
	printf("%d", count);
	return (0);
}