#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * struct format - Struct for format
 * @type: The format specifier (c, s, i, d...)
 * @f: The function pointer associated
 */
typedef struct format
{
	char *type;
	int (*f)(va_list);
} fmt_t;

int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list args);
int print_str(va_list args);
int print_pct(va_list args);
int print_int(va_list args);

#endif
