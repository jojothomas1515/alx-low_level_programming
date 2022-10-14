#include <stdio.h>

/**
 * main - main entry point for my program
 *
 * Description: Long Description
 * Return: done don done
 */

int main(void)
{
	char alpha[] = "abcdefghijklmnopqrstuvwxyz";
	int count = 0;
	int stop = sizeof(alpha);

	while (count < stop)
	{
		putchar(alpha[count]);
		count++;

		if (count == (stop + 1))
		{
			putchar('\n');
		}
	}
	return (0);
}
