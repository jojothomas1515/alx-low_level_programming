#include "../main.h"

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
