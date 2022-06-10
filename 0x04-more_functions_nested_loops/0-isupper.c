#include "main.h"

/**
 * _isupper - a function that checks uppercase character
 * @q: The number to be checked
 *
 * Return: 1 if q is uppercase, else 0
 */
int _isupper(int q)
{
	if (q >= 65 && q <= 90)
	{
		return (1);
	}

	return (0);
}
