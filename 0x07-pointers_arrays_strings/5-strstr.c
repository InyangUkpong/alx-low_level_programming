#include <stdio.h>
#include "main.h"

/**
 * *_strstr - main entry
 * @haystack: char pointer
 * @needle: The substring to be located
 * Return: if substring is located - pointer to
 * the beginning of the substring. else NULL
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *pth = haystack;
		char *ptn = needle;

		while (*pth == *ptn && *pth != '\0' && *ptn != '\0')
		{
			pth++;
			ptn++;
		}
		if (*ptn == '\0')
			return (pth);
		pth = pth + 1;
	}
	return (0);
}
