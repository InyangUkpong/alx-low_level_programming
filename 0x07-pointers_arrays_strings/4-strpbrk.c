#include <stdio.h>
#include "main.h"

/**
 * *_strpbrk - main
 * @s: char pointer
 * @accept: char variable
 * @description: function that searches a string for any set of bytes
 * Return: unsigned int
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
	}
	return (0);
}
