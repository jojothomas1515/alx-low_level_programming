#include <stdio.h>

/**
* main - Entry point of my program
 *
 * Description: This program sums all the natural numbers that are multiples
 * of 3 or 5 int 1024
 * Return: 0
*/

int main(void)
{
    int i, target, sum;

    sum = 0;
    target = 1024;
    for (i=0; i <= target; i++)
    {
        if ((i % 3) == 0 || (i % 5) == 0)
        {
            sum += i;
        }
    }

    printf("%d\n", sum);

    return 0;
}
