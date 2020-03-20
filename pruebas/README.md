README - the printf project

_printf() function prints a formatted data strings including data conversion

Why should i make it

_printf function construction and source code of printf allows you to understand how print f function perform conversion taskes 
explore the code function by changing values with this simple code to test

#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
    int len;
    int len2;
    unsigned int ui;
    void *addr;

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
    return (0);
}

Who should use it?

Anyone who needs a better understanding of printf working without buffer direct allocation

Authors

Zoltan Mora and Diego Romero
