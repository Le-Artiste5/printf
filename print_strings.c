#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * print_strings - prints arry of chars
 * @arg: argument
 * @put: displayed char
 * Return: length of string minus 1
 */

int print_strings(va_list arg, int put)
{
	char *strr = va_arg(arg, char *);

	while (*strr != '\0')
	{
		_putchar(*strr);
		strr++;
		put++;
	}

	return (put);
}


