#ifndef _HOLBERTON_H
#define _HOLBERTON_H
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "limits.h"
#include <unistd.h>

/*  printf special chars */

#define PERCENT '%'
#define BUFFER_SIZE sizeof(char) * 1024

/**
* struct lista - Short description
* @type_format: Format with conversion specifiers
* @f: Function pointer that return int and give va_list
*/
typedef struct lista
{
	char type_format;
	int (*f)(va_list, char *, int *);
} print_t;

int print_c(va_list, char *buffer, int *buffer_size);
int print_i(va_list, char *buffer, int *buffer_size);
int print_d(va_list, char *buffer, int *buffer_size);
int print_s(va_list, char *buffer, int *buffer_size);
int print_binary(va_list, char *buffer, int *buffer_size);
int rot13(va_list, char *buffer, int *buffer_size);
int rev_string(va_list, char *buffer, int *buffer_size);

int _putchar(char c, char *buffer, int *buffer_size);
int _printf(const char *format, ...);

int format_is_correct(const char format, char type);
int format_is_correct_spaces(char type);
int print_number(int n, char *buffer, int *buffer_size);

int get_function(char type, int *i, int *count, va_list lista, char *buffer, int *buffer_size);
int case_spaces(int *i, const char *f, int *count, va_list lista, char *buffer, int *buffer_size);

int _is_alpha(char c);

#endif
