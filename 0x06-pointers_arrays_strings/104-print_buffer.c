#include "main.h"
#include <string.h>

/**
 * print_buffer - prints the content of a size bytes
 * @b: buffer to print
 * @size: sizeof the buffer
 * Description:
 * The function must print the content of size
 * bytes of the buffer pointed by b
 * The output should print 10 bytes per line
 * Each line starts with the position of the
 * first byte of the line in hexadecimal (8 chars),
 * starting with 0
 * Each line shows the hexadecimal content (2 chars) of the buffer,
 * 2 bytes at a time, separated by a space
 * Each line shows the content of the buffer.
 * If the byte is a printable character,
 * print the letter, if not, print .
 * Each line ends with a new line \n
 * If size is 0 or less, the output should be a new line only \n
 */
void print_buffer(char *b, int size)
{
	int i, j, print_size = 0;

	for (i = 0; i < ((size + 1 / 10)); i++)
	{
		printf("%08x: ", i * 10);

		for (j = 1; j <= 10; j++)
		{
			if ((j + print_size) <= size)
				printf("%02x", b[j - 1]);
			else
				printf("  ");
			if ((j % 2) == 0)
				printf(" ");
		}

		for (j = 0; j < 10 && print_size < size; j++, print_size++)
		{
			if ((int)b[j] < 33)
				printf(".");
			else
				printf("%c", b[j]);
		}
		b = &b[j];
		printf("\n");
	}
}
