#ifndef _MAIN_H_
#define _MAIN_H_
#include <sys/types.h> /* definitions */
#include <sys/stat.h> /* structure of the data */
#include <fcntl.h> /* open() */
#include <unistd.h> /* constants */
#include <stdlib.h> /* malloc */

int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

#endif
