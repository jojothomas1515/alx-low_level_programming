#include "main.h"

/**
 * _islower - check of character is lower
 *
 * Description: long description
 * Return: 0
 */

int _islower(int c)
{
	if (c < 97 || c > 122)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}
