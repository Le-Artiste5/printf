#include "main.h"
/**
 * f_check - checks for format specifier
 * @arg: argument
 * @format: format spec
 * @put: printed char
 * Return: displayed char
 */

int f_check(const char *format, va_list arg, int put)
{
	switch (*format)
	{
		case 'd':

		case 'i':
		put = print_int_i(arg, put);
		break;

		case 'c':
		_putchar(va_arg(arg, int));
		put++;
		break;

		case '%':
		_putchar('%');
		put++;
		break;

		case 's':
		put = print_strings(arg, put);
		break;

		default:

		break;
	}
	return (put);
}
