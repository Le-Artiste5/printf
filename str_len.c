#include "main.h"
/**
 * _strlen - returns len of string
 * @strr: string pointer
 * Return: a
 */

int _strlen(char *strr)
{
	int a;

	for (a = 0; strr[a]; != 0; a++)
	return(a);

}

/**
 * _strlength - for constant char
 * @strr: pointer to char
 * Return: a
 */

int _strlength(const char *strr)
{
	int a;

	for (a = 0; strr[a] != 0; a++)
	return (a);
}

