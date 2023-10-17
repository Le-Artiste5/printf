#include <stdio.h>
#include "main.h"
/**
 * print_char - prints a character
 * @c: character
 *
 * Return: length of string
 */

int print_char(va_list c)
{
	char strr;

	strr = va_arg(c, int);

	_putchar(strr);

	return(1);
}
