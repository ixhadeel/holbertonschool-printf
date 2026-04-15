#include "main.h"

/**
 * _printf - custom printf function using a struct array
 * @format: the format string containing text and specifiers
 * Return: the total number of characters printed
 */
int _printf(const char *format, ...)
{
	fmt_t func[] = {{"c", p_char}, {"s", p_str}, {NULL, NULL}};
	va_list args;
	int i = 0, j, total_len = 0;

	if (!format || (format[0] == '%' && !format[1]))
		return (-1);

	va_start(args, format);
	while (format && format[i])
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '%')
				total_len += write(1, "%", 1);
			else
			{
				for (j = 0; func[j].type; j++)
				{
					if (format[i] == *(func[j].type))
					{
						total_len += func[j].f(args);
						break;
					}
				}
				if (!func[j].type)
				{
					total_len += write(1, &format[i - 1], 1);
					total_len += write(1, &format[i], 1);
				}
			}
		}
		else
			total_len += write(1, &format[i], 1);
		i++;
	}
	va_end(args);
	return (total_len);
}
