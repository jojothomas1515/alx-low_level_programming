#include "main.h"
#include <stdio.h>

/**
 * print_binary - converts int to binary
 * @n: integer to convert
 */

void print_binary(unsigned long int n)
{
	char *b_str = malloc(sizeof(char) * B_BUFF_SIZE);
	_ul_int num = n, i = 0;

	if (b_str == NULL)
	{
		_putchar('0');
	}
	if (n == 0)
	{
		_putchar('0');
	}

	while (!(num <= 0))
	{
		b_str[i] = ((num % 2) + '0');
		num = num / 2;
		i++;
	}
	_strrev(b_str);
	_print_string(b_str);
}

/**
 * _strlen - get the length of a string
 * @str: target string
 * Return: @str length
 */

_u_int _strlen(const char *str)
{
	_u_int i;

	for (i = 0; str[i] != '\0'; i++)
		;
	return (i);
}

/**
 * _strrev - reverse a string
 * @str: string to reverse
 * Return: the address of the reversed string
 */
char *_strrev(char *str)
{
	_u_int len = _strlen(str), i = 0;
	char c;

	while (i != (len / 2))
	{
		c = str[i];
		str[i] = str[(len - 1) - i];
		str[(len - 1) - i] = c;
		i++;
	}
	return (str);
}

/**
 * _print_string - this function prints out a string
 * @str: string passed as function argument
 */
void _print_string(char *str)
{
	_u_int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
}

/**
 * _strlen - get the length of a string
 * @str: target string
 * Return: @str length
 */

_u_int _strlen(const char *str)
{
	_u_int i;

	for (i = 0; str[i] != '\0'; i++)
		;
	return (i);
}