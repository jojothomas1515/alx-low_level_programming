#include "../main.h"

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
