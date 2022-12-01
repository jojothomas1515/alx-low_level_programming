#ifndef MAIN_H
#define MAIN_H
/* created by jojo thomas */

/* definations */
#define B_BUFF_SIZE 1024

/* standard libraries */
#include <stdlib.h>

/* type definations */
typedef unsigned int _u_int;
typedef unsigned long int _ul_int;

/* function prototypes */
unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);

/* other usefull prototype */
_u_int _strlen(const char *);
_u_int _pow(_u_int, _u_int);
int _putchar(char);
#endif