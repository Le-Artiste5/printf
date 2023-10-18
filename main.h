#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <string.h>
int f_check(const char *format, va_list arg, int put);
int _putchar(char c);
int print_int_i(va_list arg, int put);
int _printf(const char *format, ...);
int print_char(va_list arg, int put);
int print_strings(va_list arg, int put);


#endif
