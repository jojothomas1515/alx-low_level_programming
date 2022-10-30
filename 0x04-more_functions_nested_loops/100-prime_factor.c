#include <stdio.h>

/**
* main - program entry point
 * Description: finds and prints the largest prime factor
 * of the number 612852475143
 * Return: 0;
*/

int main(void)
{
	unsigned long int i, j, target, flag, res;

	target = 612852475143;
	res = 0;

	for (i = 0; i <= target; i++)
	{
		if((target % i) == 0)
		{
			flag = 0;
			for (j = 2; j < i; j++)
			{
				if ((i % j) == 0)
				{
					flag = 1;
				}
			}
			if (flag == 0)
			{
				res = i;
			}
		}
	}

	printf("%u\n", res);
	return (0);
}

