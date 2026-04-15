#include "main.h"

/**
 * print_int - prints an integer
 * @args: argument list containing the integer to print
 * Return: number of characters printed
 */
int print_int(va_list args)
{
	long int n = va_arg(args, int);
	long int res;
	int count = 0;
	long int div = 1;

	if (n < 0)
	{
		count += _putchar('-');
		n = -n;
	}

	res = n;
	while (res > 9)
	{
		div *= 10;
		res /= 10;
	}

	while (div >= 1)
	{
		count += _putchar(((n / div) % 10) + '0');
		div /= 10;
	}

	return (count);
}
