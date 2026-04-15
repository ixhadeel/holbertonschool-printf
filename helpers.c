#include "main.h"

/**
 * send_char - a small function to show one character
 * @c: the char we want to see
 * Return: always 1
 */
int send_char(char c)
{
	return (write(1, &c, 1));
}

/**
 * put_text - helps us print a full word or sentence
 * @str: the string to be displayed
 * Return: how many chars we printed
 */
int put_text(char *str)
{
	int idx = 0;

	if (str == NULL)
		str = "(null)";

	while (str[idx])
	{
		send_char(str[idx]);
		idx++;
	}
	return (idx);
}
