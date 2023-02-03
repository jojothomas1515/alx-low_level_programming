#include "../main.h"

/**
 * _isalpha - checks if a character is lowercase
 * @c: target character
 * Return: 1 if true , 0 if false
 */

int _isalpha(int c)
{
	if ((c >= 0x61 && c <= 0x7a) || (c >= 0x41 && c <= 0x5A))
		return (1);
	return (0);
}
