#include "main.h"

/**
*
*/

void print_number(int n)
{
    if (((n <= 9) && (n >= 0)) || ((n <= -9) && (n >= -1)))
    {
        if (n < 0)
        {
            _putchar('-');
        }
        _putchar(n + 48);
    }
    else if (((n <= 99) && (n >= 10)) || ((n <= -99) && (n >= -10)) )
    {
        if (n < 0)
        {
            _putchar('-');
        }
        _putchar((n / 10) + 48);
        _putchar((n % 10) + 48);
    }
    else if (((n >= 100) && (n <= 999)) || ((n >= -100) && (n <= -999)))
    {
        if (n < 0)
        {
            _putchar('-');
        }
        _putchar(((n / 10) / 10)  + 48);
        _putchar(((n / 10) % 10) + 48);
        _putchar((n % 10) + 48);
    }
    else if (((n >= 1000) && (n <= 9999)) || ((n >= -1000) && (n <= -9999)))
    {
        if (n < 0)
        {
            _putchar('-');
        }
        _putchar((n / 1000)  + 48);
        _putchar(((n / 100) % 10) + 48);
        _putchar(((n / 10) % 10) + 48);
        _putchar((n % 10) + 48);
    }
}