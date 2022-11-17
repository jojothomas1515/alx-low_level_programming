#ifndef INC_0X0F_FUNCTION_POINTERS_FUNCTION_POINTERS_H
#define INC_0X0F_FUNCTION_POINTERS_FUNCTION_POINTERS_H

#include <stdlib.h>

void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));

#endif /* INC_0X0F_FUNCTION_POINTERS_FUNCTION_POINTERS_H */
