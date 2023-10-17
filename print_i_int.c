#include "main.h"
/*
 * print_int_i - prints an integer
 * @argt: argument
 * Return: a number
 */
int print_int_i(va_list argt)
{
	int m = va_arg(argt, int);
	int a = 1;
	int fig, final = m % 10, dig, exp = 1;
	
	m = m / 10;
	fig = m;
	
	if (final < 0)
	{
		_putchar('-');
		fig = -fig;
		final = -final;
		m = -m;
		a++;
	}
	if (fig > 0)
	{
		while (fig / 10 != 0)
		{
			exp = exp * 10;
			fig = fig / 10;
		}
		fig = m;
		
		while (exp > 0)
		{
			dig = fig / exp;
			_putchar(dig + '0');
			fig = fig - (dig * exp);
			exp = exp / 10;
			a++;
		}
	}
	
	_putchar(final + '0');
	return (a);
}
