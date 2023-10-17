#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * print_strings - prints strings
 * @strr: string printed
 *
 * Return: length of string minus 1
 */

int print_strings(va_list strr)
{
	int a;
	int len;
	char *c;

	c = va_arg(strr, char *);

	if (c == NULL)
	{
		len = _strlen(c);
		c = "(null)";
		for (a = 0; a < len; a++)
			_putchar(c[a]);
		return (len);
	}
	else
	{
		len = _strlen(c);
		for (a = 0; a < length; ++)
			_putchar(c[a]);
		return (len);
	}
}


