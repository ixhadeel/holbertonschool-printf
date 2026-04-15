#include "main.h"

/**
 * _printf - our own version of the printf function
 * @format: a string that has the text and symbols
 * Return: the total number of things we printed
 */
int _printf(const char *format, ...)
{
	va_list my_args;
	int i = 0, total_len = 0;

	if (!format || (format[0] == '%' && !format[1]))
		return (-1);

	va_start(my_args, format);
	while (format && format[i])
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == 'c')
				total_len += send_char(va_arg(my_args, int));
			else if (format[i] == 's')
				total_len += put_text(va_arg(my_args, char *));
			else if (format[i] == '%')
				total_len += send_char('%');
			else
			{
				total_len += send_char('%');
				total_len += send_char(format[i]);
			}
		}
		else
		{
			total_len += send_char(format[i]);
		}
		i++;
	}
	va_end(my_args);
	return (total_len);
}
