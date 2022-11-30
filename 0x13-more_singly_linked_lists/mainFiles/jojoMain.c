#include <stdio.h>


/**
 * main - entry point for my function
 * Return:0 if exection was successful
 */
int main(void)
{
        int i = 0;
        char c = 'z';
        int res = 0;
        while (i++ < 0xad4)
        {

                printf("%d\n", res);
                if (res < 0xad4)
                        res += c;
                continue;
        }
        res -= c;
        printf("this is the final result: %d", res);
        return (0);
}