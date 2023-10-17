#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <string.h>

int check_cases(const char *format, va_list other_args);
int print_strings(const char *strr);
int print_char(int c);
int _printf(const char *format, ...);



#endif
