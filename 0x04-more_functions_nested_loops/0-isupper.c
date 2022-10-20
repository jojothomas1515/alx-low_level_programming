#include "main.h"

/**
 * _isupper - checks if it the character is uppercase
 * @c: character to be evaluated
 *
 * Description: long description
 * Return: 0
 */

int _isupper(int c)
{
	for(int i=65;i <= 90; i++)
	{
		if (i == c)
		{
			return (1);
		}
	}
	return (0);
}
