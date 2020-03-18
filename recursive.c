#include "holberton.h"

/**
 * f_rec_size - Return the size of integer.
 * @a: Contain integer.
 *
 * Return: Always function.
 */
int f_rec_size(int a)
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
void f_rec_print(int a)
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
