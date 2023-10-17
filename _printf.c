#include "main.h"

/**
 * _printf - Produces output accordingly
 *
 * @format: A character string
 * Return: num of characters printed
 */

int _printf(const char *format, ...)
{
	int char_length = 0;

	va_list other_args;

	va_start(other_args, format);

	if (format == NULL)
		return (-1);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			char_length += check_cases(format, other_args);
		}
		else
			char_length += write(STDOUT_FILENO, &(*format), 1);
		format++;
	}

	va_end(other_args);

	return (char_length);
}
