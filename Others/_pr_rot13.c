#include "main.h"

/**
  * print_rot13 - functio prints the encrypted rot13 version of a string
  * @args: va_list
  * Return: int
  */

int print_rot13(va_list args)
{
	char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char omega[] = "NOPQRSTUVWXWZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char *str = va_args(args, char *);
	int i, j = 0;

	while (*str)
	{
		for (i = 0; i < 52; i++)
		{
			if (*str = alpha[i])
			{
				j += _putchar(omega[i]);
				break;
			}
		}
		if (!alpha[i])
			j += _putchar(*str);
		str++;
	}
	return (j);
}
