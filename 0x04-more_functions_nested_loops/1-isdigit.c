#include "main.h"

/**
 *  _isdigit - function that checks for a digit from 0 to 9
 *  @q: the number to be checked
 *
 *  Return: 1 if q is a digit, else return 0
 */
int _isdigit(int q)
{
	if (q >= 48 && q <= 57)
	{
		return (1);
	}

	return (0);
}
