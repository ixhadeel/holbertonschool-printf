#include "main.h"

/**
 * p_char - prints a single character
 * @args: list of arguments containing the character
 * Return: number of characters printed (1)
 */
int p_char(va_list args)
{
	char c = va_arg(args, int);

	return (write(1, &c, 1));
}

/**
 * p_str - prints a string of characters
 * @args: list of arguments containing the string
 * Return: number of characters printed
 */
int p_str(va_list args)
{
	char *str = va_arg(args, char *);
	int i = 0;

	if (str == NULL)
		str = "(null)";
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	return (i);
}
