#ifndef MAIN_H
#define MAIN_H

/* Included header files */
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/* definations */
#define BUFF_SIZE 1024

/* Prototype defination */

size_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content)

#endif /* MAIN_H */
