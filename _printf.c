#include "holberton.h"
/**
 * _printf - This function is a replica of printf with less features.
 * @format: Contains a string and argument formats.
 *
 * Return: The number of characters printed (excluding the null byte used).
 */
int _printf(const char *format, ...)
{
	int i, r = 0, cont = 0;
	va_list args;

	va_start(args, format);
	if (format == NULL)
		return (-1);
	for (i = 0; format && format[i]; i++)
	{
		if (format[i] == '%' && format[i + 1] == 0)
			return (-1);

		if (format[i] != '%')
		{
			_putchar(format[i]);
			cont++;
		}
		else
		{
			r += (*get_func(format[i + 1]))(args);
			if (r == 0)
			{
				_putchar(format[i + 1]);
				cont += 2;
			}
			i++;
		}
	}
	r += cont;
	va_end(args);
	return (r);
}
