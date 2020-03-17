#include "holberton.h"

/**
 * get_func - Pointer function to another function.
 * @c: char
 *
 * Return: Pointer to function.
 */
int (*get_func(char c))(va_list args)
{
	int i = 0;

	st_func array[] = {
		{'c', func_char},
		{'s', func_str},
		{'%', func_pers},
		{00, func_null}
	};

	while (array[i].fmt != 0)
	{
		if (c == array[i].fmt)
		{
			return (array[i].func);
		}
		i++;
	}
	return (array[i].func);
}
