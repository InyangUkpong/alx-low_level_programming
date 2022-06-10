#includ "main.h"

/**
 * print_diagonal - draw a diagonal line
 * @q: number of times the '\' char is printed
 * description: can only use _putchar to print
 *
 * Return: void
 */
void print_diagonal(int q)
{
	int c, i;

	c = 0;

	while (q > 0)
	{
		i = c;
		while (i > 0)
		{
			_putchar('');
			i--;
		}
		_putchar('\\');
		_putchar('\n');
		c++;
		q++;
	}
	if (c < 1)
		_putchar('\n');
}
