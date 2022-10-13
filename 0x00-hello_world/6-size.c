#include <stdio.h>

/**
 * main - entry point of my program
 *
 * Description: this program print or the space each datatype occupy on machine
 * architechture
 * Return: Returns the success code 0;
 */

int main(void)
{
	printf("Size of a char: %d byte(s)\n", sizeof(char));
	printf("Size of a int: %d byte(s)\n", sizeof(int));
	printf("Size of a long int: %d byte(s)\n", sizeof(long));
	printf("Size of a long long int: %d byte(s)\n", sizeof(long int));
	printf("Size of a float: %d byte(s)\n", sizeof(float));
	return (0);
}
