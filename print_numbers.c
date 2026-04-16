#include "main.h"

/**
 * _putchar - writes character to stdout
 * @c: char to print
 * Return: 1
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}

/**
 * print_char - prints a char
 * @args: va_list
 * Return: 1
 */
int print_char(va_list args)
{
return (_putchar(va_arg(args, int)));
}

/**
 * print_str - prints a string
 * @args: va_list
 * Return: number of chars printed
 */
int print_str(va_list args)
{
char *s = va_arg(args, char *);
int i = 0;

if (!s)
s = "(null)";
while (s[i])
{
_putchar(s[i]);
i++;
}
return (i);
}

/**
 * print_pct - prints percent sign
 * @args: va_list (unused)
 * Return: 1
 */
int print_pct(va_list args)
{
(void)args;
return (_putchar('%'));
}



print_numbers.c


#include "main.h"

/**
 * print_int - prints an integer (d and i)
 * @args: va_list
 * Return: number of digits printed
 */
int print_int(va_list args)
{
long int n = va_arg(args, int);
long int div = 1;
int count = 0;
unsigned int num;

if (n < 0)
{
count += _putchar('-');
num = -n;
}
else
{
num = n;
}

while (num / div >= 10)
div *= 10;

while (div > 0)
{
count += _putchar(((num / div) % 10) + '0');
div /= 10;
}
return (count);
}
