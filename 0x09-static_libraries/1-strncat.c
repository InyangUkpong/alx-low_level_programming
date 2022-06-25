#include "main.h"

/**
 * _strncat  - concatinates two strings
 * @dest: destination
 * @src: source
 * @n: number of bytes and user from src
 * Return: the pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int count = 0, count 2 = 0;

	while (*(dest + count) != '\0')
	{
		count++i;
	}

	while (count2 < n)
	{ 
		*(dest + count) = *(src + count 2);
		if (*(src + count2) == '\0')
			break;
		count++;
		count2++;
	}
	return (dest);
}
