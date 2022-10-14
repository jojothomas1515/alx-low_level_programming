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
	int subc = 0;

	while (count <= stop + 1)
	{
		if (count < stop)
		{
			putchar(alpha[count]);
		}
		else
		{
			putchar('\n');
		}

		count++;
	}
	return (0);
}
