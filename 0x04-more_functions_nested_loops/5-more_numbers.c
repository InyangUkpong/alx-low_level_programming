#include "main.h"

/**
 * more_numbers - print 10 times the numbers from 0 - 14
 * description: can only use _putchar 3 times
 *
 * Return: void
 */
void more_numbers(void)
{
int q, r;

	q = 0;
	while (q < 10)
	{
		r = 0;
		while (r < 15)
		{
			if (r > 9)
				_putchar(r / 10 + '0');

			_putchar(r % 10 + '0');
			r++;
		}
		q++;
		_putchar('\n');
	}
}
