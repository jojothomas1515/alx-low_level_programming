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
	int subc=0;

	while (count < stop)
	{
		putchar(alpha[count]);
		count++;

		if (count == (stop + 1))
		{
			while (subc < 2)
			{
			putchar('\n');
			subc++;
			}
		}
	}
	return (0);
}
