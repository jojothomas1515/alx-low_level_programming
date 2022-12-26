#include "main.h"

/**
 * num_length - calculate the length of a number
 * @n: the number
 * Return: the length
 */
int num_length(int n)
{
	int num = n, len = 0;

	if (num < 0)
	{
		len += 1;
		num *= 1;
	}
	if (num == 0)
		len = 1;
	while (num != 0)
	{
		len++;
		num /= 10;
	}
	return (len);
}

/**
 * _itoa - convert a number into a string
 * @n: the number
 * Return: String with memory on heap, to be explicitly freed
 */
char *_itoa(int n)
{
	int len = num_length(n), num = n;
	char *str = malloc(sizeof(char) * (len + 1));

	if (str == NULL)
		return (NULL);

	if (num < 0)
	{
		str[len - len] = '-';
		num *= -1;
	}
	if (num == 0)
		str[0] = '0';

	str[len] = '\0';
	len--;

	while (num != 0)
	{
		str[len] = (num % 10) + '0';
		num /= 10;
		len--;
	}

	return (str);
}

/**
 * _atoi - convert string to int
 * @str: the target string
 * Return: the int of the string number
 */
long int _atoi(char *str)
{
	char *s = str;
	int result = 0, i = 0, sign = 1;

	while (s[i] != '\0')
	{
		if (s[i] == '-' && result == 0)
			sign = -1;

		if (s[i] >= 48 && s[i] <= 57)
			result = (result * 10) + (s[i] - 48);
		i++;
	}

	return ((sign * result));
}

/**
 * _strlen - calculate the length of a string
 * @str: the string
 * Return: length of the string
 */
int _strlen(char *str)
{
	char *s = str;
	int i, len;

	for (i = 0; s[i] != '\0'; i++)
		;
	len = i;
	return (len);
}
/**
 * infinite_add - function that adds two numbers
 * @n1: first of two numbers
 * @n2: second of two numbers
 * @r: buffer where the result would be save
 * @size_r: buffer size
 * Return: the addr of @r
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int num1, num2, result, i = 0;
	char *buff;

	if (_strlen(n1) > (size_r - 1) || _strlen(n2) > (size_r - 1))
		return (0);

	num1 = _atoi(n1);
	num2 = _atoi(n2);

	result = num1 + num2;

	if (num_length(result) >= size_r)
		return (0);
	buff = _itoa(result);
	for (i = 0; buff[i] != '\0'; i++)
		r[i] = buff[i];
	free(buff);
	return (r);
}
