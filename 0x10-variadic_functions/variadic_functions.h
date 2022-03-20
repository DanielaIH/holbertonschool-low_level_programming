#ifndef _VARIADIC_H_
#define _VARIADIC_H_
#include <stdarg.h>
#include <stdio.h>
#include <string.h>

/**
 * struct char_func - struct
 * @letter: letter signifying data type
 * @func: function ptr
 */
typedef struct char_func
{
	char letter;
	void (*func)(va_list);
} char_type;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
