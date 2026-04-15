#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * struct format - Struct for format specifiers
 * @type: The specifier character (e.g., c, s)
 * @f: The associated function pointer
 */
typedef struct format
{
	char *type;
	int (*f)(va_list);
} fmt_t;

int _printf(const char *format, ...);
int p_char(va_list args);
int p_str(va_list args);

#endif
