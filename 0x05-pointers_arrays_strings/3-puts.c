#include <unistd.h>

/**
 * _put - prints a string and then a new line
 * @str the string variable
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		write(1 , str, 1);
		str++;
	}
	write(1,'\n', 1);
}