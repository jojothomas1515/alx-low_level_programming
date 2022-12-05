#ifndef MAIN_H
#define MAIN_H

/* Included header files */
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/* definations */
#define BUFF_SIZE 1024

/* Prototype defination */

ssize_t read_textfile(const char *filename, size_t letters);

#endif /* MAIN_H */
