#include "main.h"
#include <stdarg.h>
/**
 * check_cases - Checks for strings, format spec and char
 * @other_args: other arguments
 * @format: a char string
 * Return: length of char
 */

int check_cases(const char *format, va_list other_args)
{
	int char_length = 0;

	switch (*format)
	{
		case 'c':
			char_length += print_char(va_arg(other_args, int));
			break;

			case '%':
			char_length += print_char('%');
			break;

			case 's':
			char_length += print_strings(va_arg(other_args, char *));
			break;

			case 'c':
			char_length += print_char(va_arg(other_args, int));
			break;

			case '\0':
			return (-1);

			default:
			char_length += write(STDOUT_FILENO, &(*format), 1);
			char_length += print_char('%');
			break;
	}

	return (char_length);
}



