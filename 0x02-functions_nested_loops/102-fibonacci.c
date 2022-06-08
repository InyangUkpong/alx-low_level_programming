#include "main.h"
#include <stdio.h>

/**
 * main- prints the fibonacci numbers
 * description: function that prints the first 50 fibonacci numberse
 * Return: 0
 */

int main(void)

{
	long int f, s, c, sum;

		sum = 0;
		f = 0;
		s = 1;
		c = 0;

	while (c < 50)

	{
		sum = f + s;
		printf("%ld", sum);
	if (c != 49)

	{
		printf(", ");
	}

		f = s;
		s = sum;
		c++;
	}
		printf("\n");

		return (0);

}

