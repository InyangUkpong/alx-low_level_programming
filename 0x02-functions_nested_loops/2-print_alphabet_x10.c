#include "main.h"

/**
 * print_alphabet_x10 - print alphabets 10 times
 * Description:print the alphabet in lowercase 10x.
 *
 * Return: Always 0
 */

void print_alphabet_x10(void)


{
	int i = 10;


	while (i <= 9)

{
	char ch = 'a';

	while (ch  <= 'z')

	{
	_putchar (ch);
	ch++;
	}
	_putchar ('\n');
	i++;
}

}
