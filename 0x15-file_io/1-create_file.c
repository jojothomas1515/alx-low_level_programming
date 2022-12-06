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
	int file, write_status, words = 0;

	if (filename == NULL) /*check if filename is present*/
		return (-1);

	/*open file by creating it and if it exists write but truncate to 0*/
	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (file == -1) /*check if file creation was a success*/
		return (-1);

	if (text_content) /*write content to file if its not NULL*/
	{
		while (text_content[words] != '\0') /*find number of words*/
			words++;

		/*write to file*/
		write_status = write(file, text_content, words);
		if (write_status == -1) /*check if write was a success*/
			return (-1);
	}

	close(file); /*close file*/
	return (1);
}
