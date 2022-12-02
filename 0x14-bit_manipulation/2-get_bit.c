#include "main.h"

int get_bit(unsigned long int n, unsigned int index)
{
	char *char_ptr;
	_u_int i = 0;

	char_ptr = _uint_to_binary(n);

	while (char_ptr[i] != '\0')
	{
		if (i == (index - 1))
		{
			return ((int)(char_ptr[i] - '0'));
		}
		return (-1);
	}
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
