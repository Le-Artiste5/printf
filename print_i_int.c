#include "main.h"
/**
 * print_int_i -  prints an integer of number
 * @put: printed char
 * @arg: argument
 * Return: a number
 */
int print_int_i(va_list arg, int put)
{
	int dig, digs;
	int numb = va_arg(arg, int);
	int tem = numb;

	if (numb < 0)
	{
		put += _putchar('-');
		numb = -numb;

		tem = tem;
	}

	while (tem != 0)
	{
		digs++;
		tem /= 10;
	}

	while (digs > 0)
	{
		int a;
		int pow = 1;

		for (a = 0; a < digs; a++)
		{
			pow *= 10;
		}
		dig = numb / pow;

		put += _putchar(dig + '0');

		numb -= dig * pow;
		digs++;
	}


	return (put);
}


