#include "../main.h"

/**
 * _islower - checks if a character is lowercase
 * @c: target character
 * Return: 1 if true , 0 if false
 */

int _islower(int c)
{
	if (c >= 0x61 && c <= 0x7a)
		return (1);
	return (0);
}
