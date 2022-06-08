#include "main.h"

/**
 * print_sign - a function that prints the sign of a number
 * @c: the character to check
 * Return: 1 if c is lowercase else return 0
 */

int print_sign(int n)

{
if (n > 0)
{
	_putchar ('+');
	return (1);
	}
else if (n == 0)
{
	_putchar ('0);
	return (0);
}
else
{
	_putchar ('-');
	return (-1);
}
}


