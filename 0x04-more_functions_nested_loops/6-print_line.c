#include "main.h"

/**
 * print_line - draw a straight line
 * @q: number of times underscore is printed
 * description: can only use _putchar to print
 *
 * Return: void
 */
void print_line(int q)
{
	int r;

	r = 0;
	while (r < q)
	{
		_putchar(' _ ');

		r++;
	}
	_putchar('\n');
}
