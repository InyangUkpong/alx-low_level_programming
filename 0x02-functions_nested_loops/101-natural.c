#include "main.h"
#include <stdio.h>

/**
 * main - prints the sum of all multiples 3 or 5 till the 1024
 *
 * Return: Always (Success)
 */

int main(void)

{
	int f, q =0;

	while (f < 1024)
	{
	if ((f % 3 == 0) || (f % 5 == 0))
	{
		q += f;
	}

	f++;
	}

	printf("%d\n", q);
	return (0);

}
