#include "function_pointers.h"

/**
 * print_name - print a name
 * @name: name
 * @f: function thats prints
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
		exit(1);
	if (f == NULL)
		exit(1);
	(*f)(name);
}
