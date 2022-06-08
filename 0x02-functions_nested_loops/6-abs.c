#include "main.h"
#include <stdio.h>

/**
 * _abs - a function that computes the absolute value of an integer
 * @nums : an integer
 * Description: give the absolute value of an integer
 * Return: 1 or 0
 */

int _abs(int nums)
{
	if (nums < 0)
	{
		nums = nums * (-1);
	}

	return (nums);
}
