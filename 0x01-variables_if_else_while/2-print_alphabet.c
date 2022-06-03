#include <stdio.h>

/**
 * main - Prints the alphabeth
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char q;

	for (q = 'a'; q <= 'z'; q++)
		putchar(q);

	putchar('\n');
	return (0);
}
