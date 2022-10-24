#include "main.h"

/**
 * print_times_table - times table
 * @num: the table size
 *
 * Description: the multiplication table
 * Return: 0
 */

void print_times_table(int num) {
    int m = 0, n;
    if (num < 0 || num > 15)
    {
        _putchar('$');
        _putchar('\n');
    }
    else
    {
    for (m = 0; m < num; m++)
    {
        for (n = 0; n < num; n++)
        {
            int result = n * m;
            int ld = result % 10;
            if (result < 10)
            {
                _putchar(' ');
                _putchar(' ');
                _putchar(' ');
            }
            else if (result < 100)
            {
                _putchar(' ');
                _putchar(' ');
            }
            else if (result < 1000)
            {
                _putchar(' ');
            }
            _putchar( ld + 48);

        }
        _putchar('$');
        _putchar('\n');
    }
    }
}
