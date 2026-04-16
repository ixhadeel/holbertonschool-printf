#include "main.h"

/**
 * print_int - prints an integer
 * @args: argument list containing the integer to print
 * Return: number of characters printed
 */
int print_int(va_list args)
{
	long int n = va_arg(args, int);
	long int div = 1;
	int count = 0;

	if (n < 0)
	{
		count += _putchar('-');
		n = -n;
	}

	if (n == 0)
	{
		count += _putchar('0');
		return (count);
	}

	
	while ((n / div) >= 10)
		div *= 10;

	
	while (div > 0)
	{
		count += _putchar((n / div) + '0');
		n %= div;
		div /= 10;
	}

	return (count);
}
