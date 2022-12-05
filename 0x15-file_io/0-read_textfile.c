#include "main.h"

/**
 * read_textfile - Functions that reads txt file
 * @filename: name of the file to read from
 * @letters: number of characters to print
 * Return: the size of letter outputed to the stdout
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char buff[BUFF_SIZE];
	int fd;
	ssize_t w_count;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);
	read(fd, buff, letters);
	buff[letters + 1] = '\0';
	fd = close(fd);
	w_count = write(STDOUT_FILENO,buff,letters);

	if (w_count != (ssize_t)letters)
		return (0);
	return (w_count);
}
