#include "main.h"

/**
 * print_chessboard - main
 * @a: param
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for(i = 0; i < 8 ; i++)
	{
		for(j = 0; j < 8; j++)
			printf("%s\n", a[i]);
		_putchar('\n');

	}

}
