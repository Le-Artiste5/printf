#include <stdio.h>
#include "main.h"
/**
 * print_char - prints a character
 * @arg: argument
 * @put: printe char
 * Return: length of string
 */

int print_char(va_list arg, int put)
{
	int charact = va_arg(arg, int);

	_putchar(charact);

	return (put + 1);
}
