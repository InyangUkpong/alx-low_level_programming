#include "main.h"

/**
 * print_last_digit - a function that prints the last digit of a number
 * @x: is an integer
 * Return: 0 (Success)
 */

int print_last_digit(int x)

{

if (x > 0 || x == 0)

{
	_putchar (x % 10 + '0');
	return (x % 10);
}
else
{
	x = x * -1;
	_putchar (x % 10 + '0');

	return (x % 10);
}

}
