#include "main.h"

/**
 * print_int - prints a given integer from variadic parameters
 * @args: variadic parameter
 *
 * Return: number of characters printed on Success
 */

int print_int(va_list args)
{
	int i = 0;
	int count = 0;
	int numb;
	int my_arr[10];
	char x[1];


	numb = va_arg(args, int);


	while (numb != 0)
	{
		my_arr[i] = (numb % 10);
		numb = numb / 10;
		if (numb == 0)
			break;
		i++;
	}

	/*Write the contents of the array to stdout*/
	while (i >= 0)
	{
		x[0] = ('0' + my_arr[i]); /*Convert int to char*/
		count += write(1, x, 1);
		i--;
	}

	return (count);
}
