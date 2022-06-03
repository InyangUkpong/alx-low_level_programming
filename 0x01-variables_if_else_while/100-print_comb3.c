#include <stdio.h>

/**
 * main - Prints the numbers from 00 to 99
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int b, i;

	b = i = '0';
	for ( b = '0'; b <= '9'; b++)
	{
		for (i = '0'; i <= '9'; i++)
		{
			putchar(b);
			putchar(i);

			if ((b != '9') || (b == '9' && i != '9'))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	
	putchar('\n');

	return (0);
