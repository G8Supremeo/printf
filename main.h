#ifndef _MAIN_H_
#define _MAIN_H_
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

/**
  * struct print - structure for printing various types(specifiers)
  * @t: type to be printed
  * @f: function to print
  */
typedef struct print
{
	char *t;
	int (*f)(va_list);
} print_t;

int _putchar(char c);
int _printf(const char *format, ...);
int (*check_format(const char *format))(va_list);
int print_bin(va_list b);
int print_cent(va_list args);
int print_char(va_list args);
int print_dec(va_list args);
int print_hex_low(va_list x);
int print_hex_upp(va_list X);
int print_int(va_list args);
int print_oct(va_list o);
int print_ptr(va_list p);
int print_rev(va_list r);
int print_rot13(va_list R);
int print_str(va_list args);
int print_uns(va_list u);
int cnvrt_to_dec(int n, int *cnt);

#endif /* _MAIN_H_ */
