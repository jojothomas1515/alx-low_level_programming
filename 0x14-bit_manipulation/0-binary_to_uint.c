#include "main.h"

/**
 * binary_to_uint - convert binary to unsigned integer
 * @b: string with the binary
 * Return: the and unsigned integer
 */

unsigned int binary_to_uint(const char *b)
{
	_u_int len = 0, i = 0, result = 0;

	if (b == NULL)
		return (0);

	len = _strlen(b);

	while (b[i] != '\0')
	{
		if (b[i] < 48 || b[i] > 49)
			return (0);
		result += (b[i] - '0') * _pow(2, ((len - 1) - i));
		i++;
	}
	return (result);
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
 * _pow - this function compete the result of @a to the power of @b
 * @a: operand
 * @b: power operator value
 * Return: the result
 */

_u_int _pow(_u_int a, _u_int b)
{
	_u_int i = 0, result = a;

	if (b == 0)
		return (1);
	if (b == 1)
		return (a);

	while (i < b - 1)
	{
		result *= a;
		i++;
	}
	return (result);
}
