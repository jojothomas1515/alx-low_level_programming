#include <stdlib.h>
#include <time.h>
/* more headers goes there */

#include <stdio.h>

/* betty style doc for function main goes there */

/**
 * main - Entry point for my program
 *
 * Description: This program takes the first and last number in in my number
 * and check which is greater
 * Return: Returns 0, the success exit code
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	return (0);
}
