#include "main.h"

/**
 * print_int - prints an integer
 * @n: integer to print
 * Return: number of characters printed
 */
int print_int(int n)
{
	unsigned int num;
	int count = 0;

	if (n < 0)
	{
		count += send_char('-');
		num = -n;
	}
	else
	{
		num = n;
	}

	if (num / 10)
	{
		count += print_int(num / 10);
	}

	count += send_char((num % 10) + '0');

	return (count);
}
