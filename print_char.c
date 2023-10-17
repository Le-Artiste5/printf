#include <stdio.h>
#include "main.h"
/**
 * print_char - prints a character
 * @c: character
 *
 * Return: length of string
 */

int print_char(int c)
{
	int lent = write(STDOUT_FILENO, &c, 1);

	return (lent);
}
