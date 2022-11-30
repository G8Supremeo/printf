#include "main.h"
#include <stdarg.h>

/**
 * check_format - checks if there is a valid format specifier
 * @format: possible valid format specifier
 * Return: pointer to valid function or NULL
 */
int (*check_format(const char *format))(va_list)
{
	int i = 0;
	print_t p[] = {
		{"c", print_char},
		{"s", print_str},
		{"i", print_int},
		{"d", print_dec},
		{"b", print_bin},
		{"u", print_uns},
		{"o", print_oct},
		{"x", print_hex_low},
		{"X", print_hex_upp},
		{"p", print_ptr},
		{"r", print_rev},
		{"R", print_rot13},
		{NULL, NULL}
	};

	for (; p[i].t != NULL; i++)
	{
		if (*(p[i].t) == *format)
			break;
	}
	return (p[i].f);
}

/**
 * _printf - function for format printing
 * @format: list of arguments to printing
 * Return: Number of characters to printing
 */
int _printf(const char *format, ...)
{
	va_list ap;
	int (*f)(va_list);
	unsigned int i = 0, counter = 0;

	if (format == NULL)
		return (-1);

	va_start(ap, format);
	while (format && format[i])
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			counter++;
			i++;
			continue;
		}
		else
		{
			if (format[i + 1] == '%')
			{
				_putchar('%');
				counter++;
				i += 2;
				continue;
			}
			else
			{
				f = check_format(&format[i + 1]);
				if (f == NULL)
					return (-1);
				i += 2;
				counter += f(ap);
				continue;
			}
		}
		i++;
	}
	va_end(ap);
	return (counter);
}
