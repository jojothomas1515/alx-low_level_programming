#include "main.h"

unsigned int _strlen(char *str);
/**
 * create_file - function that creates a file and write to it
 * @filename: name of file to be created
 * @text_content: to be added to the created file
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY, 00600);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		if (write(fd, text_content, _strlen(text_content)) == -1)
			return (-1);
		return (1);
	}
	return (1);
}

/**
 * _strlen - compute the length of a given string
 * @str: target string
 * Return: The length of the string
 */

unsigned int _strlen(char *str)
{
	unsigned int count = 0;

	while (str[count++] != '\0')
		;
	count--;
	return (count);
}
