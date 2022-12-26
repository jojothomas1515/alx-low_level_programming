#include "main.h"
int _strlen(char *str);
int check_palin(char *str, int n);

/**
 * is_palindrome - test if a string is palindrome
 * @s: target string
 * Return: 1 is true, 0 if false
 */
int is_palindrome(char *s)
{
	int len = 0;

	len = _strlen(s);
	len--;

	if (len == 0)
		return (1);

	if (*s == s[len])
		return (check_palin((s + 1), 1));

	return (0);
}

/**
 * _strlen - compute the length of a string
 * @str: target string
 * Return: length
 */
int _strlen(char *str)
{
	char *s = str;
	int i = 0;

	while (*(s + i) != '\0')
		i++;
	return (i);
}

/**
 * check_palin - is_pallindrome helper function
 * @str:target string
 * @n: number to minus from total length
 * Return: 1 if true and 0 if false
*/
int check_palin(char *str, int n)
{
	int len = 0;

	len = _strlen(str);
	len--;

	if ((len - n) <= 0)
		return (1);

	if (*str == str[len - n])
		return (check_palin((str + 1), n + 1));

	return (0);
}
