#include "main.h"

/**
 * _printf - Produces output accordingly
 *
 * @format: A character string
 * Return: num of characters printed
 */

int _printf(const char *format, ...)
{

	va_list arg;

	int put = 0;

	va_start(arg, format);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			put = f_check(format, arg, put);
			format++;
		}

		else
		{
			_putchar(*format);
			put++;

			format++;
		}
	}

	va_end(arg);
	return (put);

}

