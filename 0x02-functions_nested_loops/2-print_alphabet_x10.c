#include "main.h"

void print_alphabet_x10(void)
{
	int count = 0;
	char alpha;

	while (count <= 10)
	{
		alpha = 'a';
		while (alpha < 'z')
		{
			_putchar(alpha);
			alpha++;
		}
		_putchar('\n');
		count++;
	}
}
