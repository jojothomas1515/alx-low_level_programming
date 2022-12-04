#include "main.h"

/**
 * get_bit - get the bit value at a specific index
 * @n: integer
 * @index: the target index in binary
 * Return: 1 or 0 if successful ,-1 if not
 */

int get_bit(unsigned long int n, unsigned int index)
{
	char *char_ptr;
	_u_int i = 0;

	char_ptr = _uint_to_binary(n);
	#ifdef DEBUG
	printf("\n\nThe binary repr for %lu is [ %s ]\n\n", n, char_ptr);
	#endif
	while (char_ptr[i] != '\0')
	{
		if (i == (index))
		{

			return ((int)(char_ptr[i] - '0'));
		}
		i++;
	}
	return (-1);
}

/**
 * _uint_to_binary - convert unsigned int to binary
 * @n: unsigned int to convert
 * Return: char*
 */
char *_uint_to_binary(_ul_int n)
{
	char *b_str = malloc(sizeof(char) * B_BUFF_SIZE);
	_ul_int num = n, i = 0;

	if (b_str == NULL)
	{
		b_str[1] = '0';
		return (b_str);
	}
	if (n == 0)
	{
		b_str[1] = '0';
		return (b_str);
	}

	while (!(num <= 0))
	{
		b_str[i] = ((num % 2) + '0');
		num = num / 2;
		i++;
	}
	_strrev(b_str);
	return (b_str);
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
