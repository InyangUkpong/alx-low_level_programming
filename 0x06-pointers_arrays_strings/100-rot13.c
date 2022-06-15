#include "main.h"

/**
 * rot13 - ecnodes a string using rot13
 * @q: input string
 * Return: the pointer to dest
 */

char *rot13(char *q)
{
	int count = 0, i;
	char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFCHIJKLM";

while (*(q + count) != '\0')
{
	for (i = 0; i < 52; i++)
	{
		if (*(q + count) == alphabet[i])
	{
			*(q + count) = rot13[i];
				break;
	}
	}
	count++;
	}

	return (q);
}

