#ifndef _MAIN_H_
#define _MAIN_H_
#include <stdio.h>
#include <stdarg.h>

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
int print_char(va_list c);
int print_str(va_list s);
int print_dec(va_list d); 
int print_int(va_list i); 
int print_bin(va_list b); 
int print_oct(va_list o);
int print_ptr(va_list p);
int print_uns(va_list u);
int print_hex(va_list x); 
int print_rev(va_list r); 
int print_rot13(va_list R); 

#endif /* _MAIN_H_ */
