#include <stdio.h>

/**
 * main - Program entry point
 *
 * Description: Long description
 * Return: 0 as success
 */

int main(void)
{
	int n1 = 0;
	int n2 = 0;
	int b = 0;
	int b2 = 0;
	int m1 = 0;
	int m2 = 0;

	while (n1 < 10)
	{
		m1 = n1;
		n2 = 0;
		while (n2 < 10)
		{
			m2 = n2 + 1;
			while (m1 < 10)
			{
				while (m2 < 10)
				{
					putchar(n1 + '0');
					putchar(n2 + '0');
					putchar(' ');
					putchar(m1 + '0');
					putchar(m2 + '0');
					b = n1 == n2;
					b2 = m1 == m2;
					if (b && b2 && m1 == 9 && n1 == 9)
					{
					}
					{
						putchar(',');
						putchar(' ');
					}
					m2++;
				}
				m1++;
			}
			n2++;
		}
		n1++;
	}
	putchar('\n');
	return (0);
}
