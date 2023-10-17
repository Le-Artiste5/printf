#include "main.h"

/**
 * _putchar - writes out char
 * @c: Character
 *
 * Return: onsucess, 1 and -1 for failure
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
			
