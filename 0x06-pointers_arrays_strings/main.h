#ifndef INC_0X05_POINTER_ARRAY_STRINGS_MAIN_H
#define INC_0X05_POINTER_ARRAY_STRINGS_MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>

/* type defination */
typedef long int _lu_int;

/* prototypes */

char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
void reverse_array(int *a, int n);
char *string_toupper(char *);
char *cap_string(char *);
char *leet(char *s);
char *rot13(char *);
void print_number(int n);
char *infinite_add(char *n1, char *n2, char *r, _lu_int size_r);

int _putchar(char c);

#endif /*INC_0X05_POINTER_ARRAY_STRINGS_MAIN_H*/
