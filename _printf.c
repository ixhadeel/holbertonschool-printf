#include "main.h"

/**
 * _printf - produces output according to a format
 * @format: character string
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	int i = 0, j, count = 0;
	fmt_t forms[] = {
		{"c", print_char}, {"s", print_str},
		{"%", print_pct}, {"d", print_int},
		{"i", print_int}, {NULL, NULL}
	};

	va_start(args, format);
	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	while (format && format[i])
	{
		if (format[i] == '%')
		{
			i++;
			j = 0;
			while (forms[j].type)
			{
				if (format[i] == *(forms[j].type))
				{
					count += forms[j].f(args);
					break;
				}
				j++;
			}
			if (!forms[j].type)
			{
				count += _putchar('%');
				count += _putchar(format[i]);
			}
		}
		else
			count += _putchar(format[i]);
		i++;
	}
	va_end(args);
	return (count);
}
