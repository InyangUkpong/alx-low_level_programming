#include "main.h"
#include <stdio.h>

/**
 * main prints the fibonacci numbers
 * Return: 0
 */

int mai(void)
{
	int counter;
	int counts = 50;
	long a  =1;
	long b = 2;

	for (counter = 1; counter <= (counts / 2); counter++)

	{
		printf("%ld %ld ", a, b);
		a += b;
		b += a;
	}

	if (counts % 2 == 1)
		printf("%ld", a);

	printf("\n");

	return (0);

}

