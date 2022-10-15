#include <stdio.h>

/**
 * main - Program entry point
 *
 * Description: Long description
 * Return: 0 as success
 */

int main(void)
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
/*	int c1 = 0;*/
/*	int d1 = 0; */
	int b1 = 0;
	int b2 = 0;
	int b3 = 0;
	int b4 = 0;
	a = 0;
	while (a < 10)
	{
		b = 0;
/*		c1 = a; */
		while (b < 10)
		{
/*			d1 = b + 1; */
			c = 0;
			while (c < 10)
			{
				d = 0;
				while (d < 10)
				{
					if (c == 0 || d == 0)
					{
						d = b + 1;
						continue;
					}
					b1 = a == 9;
					b2 = b == 8;
					b3 = c == 9;
					b4 = d == 9;
					putchar(a + '0');
					putchar(b + '0');
					putchar(' ');
					putchar(c + '0');
					putchar(d + '0');
					if (b1 && b2 && b3 && b4)
					{
					}
					else
					{
						putchar(',');
						putchar(' ');
					}
					d++;
				}
				c++;
			}
			b++;
		}
		a++;
	}
	putchar('\n');
	return (0);
}
