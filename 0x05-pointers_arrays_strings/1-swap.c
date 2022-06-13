#include "main.h"
#include <stdio.h>

/**
 * swap_int - swaps int
 *
 * @a: pointer a
 * @b: pointer b
 */

void swap_int(int *a, int *b)
{
	int aa, bb;

	aa = *a;
	bb = *b;

	*a = bb;
	*b = aa;
}
