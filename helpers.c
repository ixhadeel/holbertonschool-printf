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


