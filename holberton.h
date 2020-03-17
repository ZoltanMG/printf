#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <unistd.h>

/**
 * struct format_and_functions - Contains a character and pointer to function.
 * @fmt: Contains data to evaluate.
 * @func: Pointer to function.
 */
typedef struct format_and_functions
{
	char fmt;
	int (*func)(va_list args);
} st_func;

int _printf(const char *format, ...);
int _putchar(char c);
int (*get_func(char c))(va_list args);
int func_char(va_list args);
int func_str(va_list args);
int func_pers(va_list args);
int func_null(va_list args);

#endif
