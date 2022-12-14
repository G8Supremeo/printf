#include "main.h"

/**
 * check_specifier - check that character is a valid specifier and
 * assigns an appropriate fucntion for its printing.
 * @format: the specifier (char*)
 *
 * Return: pointer to function, if successful
 * NULL pointer if not successful
 */

int (*check_specifier(const char *format))(va_list)
{
	int i;

	func_t my_array[] = {
		{"c", print_char},
		{"s", print_str},
		{"%", print_cent},
		{"i", print_int},
		{"d", print_dec},
		{"r", print_rev.c },
		{"x", _pr_hex.c },
		{"R", _pr_rot13},
		{"b", print_bin},
		{"u", print_uns},
		{"o", print_oct},
		{"p", print_ptr},
		{NULL, NULL}
	};

	for (i = 0; my_array[i].t != NULL; i++)
	{
		if (*(my_array[i].t) == *format)
		{
			return (my_array[i].f);
		}
	}

	return (NULL);
}

