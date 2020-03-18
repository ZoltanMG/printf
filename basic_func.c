#include "holberton.h"

/**
 * func_char - Print a character.
 * @args: Contains arguments.
 *
 * Return: Always 1.
 */
int func_char(va_list args)
{
	_putchar(va_arg(args, int));
	return (1);
}

/**
 * func_str - Print strings.
 * @args: Contains arguments.
 *
 * Return: Always size of string.
 */
int func_str(va_list args)
{
	char *string;
	int i = 0;

	string = va_arg(args, char *);
	if (string == NULL)
		string = "(null)";

	while (string[i])
	{
		_putchar(string[i]);
		i++;
	}
	return (i);
}

/**
 * func_pers - Print a percentage.
 * @args: Contains arguments.
 *
 * Return: Always 1.
 */
int func_pers(va_list __attribute__ ((unused))args)
{
	_putchar('%');
	return (1);
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

/**
 * func_int - Print a integer.
 * @args: Contains arguments.
 *
 * Return: Always size.
 */
int func_int(va_list args)
{
	int size;
	int a;

	a = va_arg(args, int);
	size = f_rec_size(a);
	f_rec_print(a);
	return (size);
}
#include "holberton.h"

/**
 * func_char - Print a character.
 * @args: Contains arguments.
 *
 * Return: Always 1.
 */
int func_char(va_list args)
{
	_putchar(va_arg(args, int));
	return (1);
}

/**
 * func_str - Print strings.
 * @args: Contains arguments.
 *
 * Return: Always size of string.
 */
int func_str(va_list args)
{
	char *string;
	int i = 0;

	string = va_arg(args, char *);
	if (string == NULL)
		string = "(null)";

	while (string[i])
	{
		_putchar(string[i]);
		i++;
	}
	return (i);
}

/**
 * func_pers - Print a percentage.
 * @args: Contains arguments.
 *
 * Return: Always 1.
 */
int func_pers(va_list __attribute__ ((unused))args)
{
	_putchar('%');
	return (1);
}

/**
 * func_int - Print a integer.
 * @args: Contains arguments.
 *
 * Return: Always size.
 */
int func_int(va_list args)
{
	int size;
	long int a;

	a = va_arg(args, int);
	if (a < 0)
	{
		a = a * -1;
		_putchar('-');
		size = f_rec_size(a);
		f_rec_print(a);
	}
	else
	{
		size = f_rec_size(a);
		f_rec_print(a);
	}
	return (size);
}

/**
 * func_dec - Print a integer.
 * @args: Contains arguments.
 *
 * Return: Always size.
 */
int func_dec(va_list args)
{
	return (func_int(args));
}
