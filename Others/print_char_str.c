#include "main.h"

/**
  * print_c - prints a char
  * @c: char to be printed
  * Return: Always 1
  */

int print_c(va_list c)
{
	char a;

	a = (char)va_arg(c, int);
	_putchar(a);

	return (1);
}

/**
  * print_s - prints a string
  * @s: string to be printed
  * Return: number of chars printed
  */
int print_s(va_list s)
{
	int i;
	char *str = va_arg(s, char *);

	if (str == NULL)
		str = "(nil)"

	for (i = 0; str[i]; i++)
	{
		_putchar(str[i]);
	}
	return (i);
}

/**
  * print_r - prints a string in reverse
  * @r: string to be printed
  * Return: number of chars printed
  */
int print_r(va_list r)
{
	int i, j;
	char *str;

	str = va_arg(r, char *);
	if (str == NULL)
		str = ")lin(";
	for (i = 0; str[i]; i++)
		;
	for (i -= 1; i >= 0; i--)
	{
		_putchar(str[i]);
		j++;
	}
	return (j);
}

/**
  * hex_print - prints a char's ascii value in uppercase hex
  */
