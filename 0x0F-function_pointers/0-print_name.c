#include "function_pointers.h"

/**
 * print_name - print a name
 * @name: name
 * @f: function thats prints
 */
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
