#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char arr2[32] = "jojo thomas";
	char *ptr;
	ptr = string_toupper(arr2);

	printf("%s\n", ptr);
	printf("%s\n", arr2);

}