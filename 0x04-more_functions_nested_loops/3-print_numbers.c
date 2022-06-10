#include "main.h"

/**
 * print_numbers - print numbers 0 to 9
 *
 * Return: Always 0 (success) 
 */

void print_numbers(void)
{
	int q;

	q = 0;

	for (q = 0; q < 10; q++)
	_putchar(q + '0');
	_putchar('\n');
}
