#include <stdio.h>
 
/*Defines four variables */

#define VARIABLES \
    X(value1, 1)  \
    X(value2, 2)  \
    X(value3, 3)  \
    X(value4, 4)
 
int main(void)
{


    #define X(value, a) char value[10];
        VARIABLES
    #undef X
      


    #define X(value, a) scanf("\n%s", value);
        VARIABLES
    #undef X
      
    
    #define X(value, a) printf("%d) %s\n", a, value);
        VARIABLES
    #undef X
    return 0;
}

