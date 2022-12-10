#include "main.h"

/**
 * main - Entry point of the program
 *
 * @argc: Argument counts
 * @argv: Arguments array
 *
 * Return: 0 on sucess
 */

int main(int argc, char *argv[])
{
	char *FILE_FROM, *FILE_TO, txt_buff[2] = "\0\0";
	int fd_fm, fd_ft;
	int read_status, write_status;

	if (argc != 3)
	{
		print_string("Usage: cp file_from file_to\n", STDERR_FILENO);
		exit(97);
	}
	FILE_FROM = argv[1];
	FILE_TO = argv[2];

	fd_fm = open(FILE_FROM, O_RDONLY);
	fd_ft = open(FILE_TO, O_CREAT|O_WRONLY|O_TRUNC, 0664);

	if (fd_fm == -1)
	{
		print_string("Error: Can't read from file ", STDERR_FILENO);
		print_string(FILE_FROM, STDERR_FILENO);
		print_string("\n", STDERR_FILENO);
		exit(98);
	}
	if (fd_ft == -1)
	{
		print_string("Error: Can't write to ", STDERR_FILENO);
		print_string(FILE_TO, STDERR_FILENO);
		print_string("\n", STDERR_FILENO);
		exit(99);
	}

	while (1)
	{
		read_status = read(fd_fm, txt_buff, 1);

		if (read_status == 0)
			break;
		write_status = write(fd_ft, txt_buff, 1);
		if (write_status == -1)
			exit(99);

	}

	return (0);
}

/**
 * print_string - print string out to stdout
 *
 * @str: string to print
 * @iostream: what iostream to write to
 *
 * Return: word count on success or -1 on fail
 */

int print_string(char *str, int fd)
{
	int words = 0, word_status = 0;

	while (str[words] != '\0')
		words++;
	word_status = write(fd, str, words);
	if (word_status != -1)
	{
		return(word_status);
	}
	return (-1);
}

/**
 * e_exit - exit with an err messsge and an error code
 * @error: error code
 * @str: name of the file
 * @fd: file descriptor
 */

void e_exit(int error, char *str, int fd)
{
	switch (error)
	{
	case 97:
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(error);
		break;
	case 98:
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", str);
		exit(error);
		break;
	case 99:
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", str);
		exit(error);
		break;
	case 100:
		dprintf(STDERR_FILENO, "Error: Can't close file on %d\n", fd);
		exit(error);
		break;
	default:
		break;
	}
}
