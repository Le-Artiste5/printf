#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * print_strings - prints strings
 * @strr: string printed
 *
 * Return: length of string minus 1
 */

int print_strings(const char *strr)
{
	int back;
	int lent = 0;
	const char *n_string = "(null)";

	if (strr == NULL)
	{
		strr = n_string;
	}
	while (*strr != '\0')
	{
		back = write(STDOUT_FILENO, strr++, 1);
		if (back == -1)
		{
			return (-1);
		}
		lent += back;
	}
	if (back == -1)
	{
		return (-1);
	}
	lent += back;

	return (lent - 1);

}
