#include <stdio.h>

/**
 * main - Print three combinations of numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int b, i, k;

	for (b = '0'; b <= '9'; b++)
	{
		for (i = '0'; i <= '9'; i++)
		{
			for (k = '0'; k <= '9'; k++)
			{
				if (b < i && i < k)
				{
					putchar(b);
					putchar(i);
					putchar(k);

					if (b != '7')
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
