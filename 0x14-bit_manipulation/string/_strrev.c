#include "../main.h"

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