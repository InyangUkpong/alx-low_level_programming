#include <stdio.h>

/**
 * main - Prints the single digig numbers 0 to 9
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char f;

	for (f = '0'; f <= '9'; f++)
	{
		putchar(f);
	}

	putchar('\f');

	return (0);
}
