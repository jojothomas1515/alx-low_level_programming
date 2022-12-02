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
int get_bit(unsigned long int n, unsigned int index);

/* other usefull prototype */
_u_int _strlen(const char *);
_u_int _pow(_u_int, _u_int);
char *_strrev(char *str);
void _print_string(char *str);
int _putchar(char);
char *_uint_to_binary(_ul_int n);

#endif /* MAIN_H*/