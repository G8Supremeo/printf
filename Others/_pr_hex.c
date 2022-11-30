#include "main.h"

/**
  * print_hex - prints the hexadecimal representation of a number
  * @args: va_list
  * Return: int
  */

int print_hex(va_list args)
{
	int count = 0;
	int *ptr = &count;
	unsigned int a = va_arg(args, unsigned int);

	return (con_to_hex(num, ptr));
}

/**
  * con_to_hex - convert decimal to hexadecimal
  * @n: unsigned int
  * @ptr: int pointer
  * Return: int
  */

int con_to_hex(unsigned int n, int *ptr)
{
	char hex[] = "0123456789abcdef";

	if (n / 16)
		con_to_hex(n / 16, ptr);
	*ptr += _putchar(hex[n % 16]);
	return (*ptr);
}

/**
  * print_heX - prints the hexadecimal representation of a number
  * @args: va_list
  * Return: int
  */

int print_heX(va_list args)
{
	int count = 0;
	int *ptr = &count;
	unsigned int a = va_arg(args, unsigned int);

	return (con_to_heX(num, ptr));
}

/**
  * con_to_heX - convert decimal to hexadecimal
  * @n: unsigned int
  * @ptr: int pointer
  * Return: int
  */

int con_to_heX(unsigned int n, int *ptr)
{
	char heX[] = "0123456789ABCDEF";

	if (n / 16)
		con_to_heX(n / 16, ptr);
	*ptr += _putchar(heX[n % 16]);
	return (*ptr);
}
