#include "main.h"

/**
 * times_table - function that prints 9 times table, starting at 0
 *
 * Return: nothing
 */

void times_table(void)
{
int x, y, z;

	for (x =0; x < 10; x++)

	{
		for (y = 0; y < 10; y++)

	{
		z = x * y;
	
if ( y == 0)

	{
		_putchar('0');
		continue;
	}
		_putchar(',');
		_putchar(' ');

if (m / 10 == 0)
		_putchar(' ');
		else
		_putchar((m /10) + '0');
		_putchar((m % 10) + '0');
	}
		_putchar('\n');

	}
}
