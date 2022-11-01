#include "main.h"

void print_chessboard(char (*a)[8])
{
	int i = 0, j;
	while (a[i][0] != '\0')
	{
		j = 0;
		while (a[i][j] != '\0')
		{
			putchar(a[i][j]);
			j++;
		}
		if (a[i + 1][0] != '\0')
			putchar(',');
		putchar('\n');
		i++;

	}
}
