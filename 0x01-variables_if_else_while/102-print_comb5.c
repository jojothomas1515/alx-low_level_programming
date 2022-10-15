#include <stdio.h>

/**
 * main - Program entry point
 *
 * Description: Long description
 * Return: 0 as success
 */

int main(void)
{
	int first_num, last_num;

	first_num = 0;
	while (first_num <= 99)
	{
		last_num = first_num;
		while (last_num <= 99)
		{
			if (last_num != first_num)
			{
				putchar((first_num / 10) + 48);
				putchar((first_num % 10) + 48);
				putchar(' ');
				putchar((last_num / 10) + 48);
				putchar((last_num % 10) + 48);

				if (first_num != 98 || last_num != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
			++last_num;
		}
		++first_num;
	}
	putchar('\n');
	return (0);
}
