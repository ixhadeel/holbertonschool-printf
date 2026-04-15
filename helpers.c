#include "main.h"

/**
 * send_char - writes the character c to stdout
 * @c: The character to print
 * Return: On success 1
 */
int send_char(char c)
{
	return (write(1, &c, 1));
}

/**
 * put_text - prints a string
 * @str: The string to print
 * Return: Number of characters printed
 */
int put_text(char *str)
{
	int i = 0;

	if (str == NULL)
		str = "(null)";

	while (str[i])
	{
		send_char(str[i]);
		i++;
	}
	return (i);
}
