#include "holberton.h"

/**
 * f_rec_size - Return the size of integer.
 * @a: Contain integer.
 *
 * Return: Always function.
 */
int f_rec_size(long int a)
{
	if (a < 10)
	{
		return (1);
	}
	return (1 + f_rec_size(a / 10));
}

/**
 * f_rec_print - Print a integer.
 * @a: Contain integer.
 */
void f_rec_print(long int a)
{
	if (a < 10)
	{
	}
	else
	{
		f_rec_print(a / 10);
	}
	a %= 10;
	_putchar(a + '0');
}

/**
 * func_null - Print a percentage.
 * @args: Contains arguments.
 *
 * Return: Always 0.
 */
int func_null(va_list __attribute__ ((unused))args)
{
	_putchar('%');
	return (0);
}
