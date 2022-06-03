#include <stdio.h>

/**
 * main - Prints the number from 0 to 9
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int y;

	for (y = '0'; y <= '9'; y++)
	{
		putchar(y);
	}	
	putchar('\n');
	return (0);
}
