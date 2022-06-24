#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds positive numbers
 * @argc: count of command line arguments
 * @argv: array that contains the program command line
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int i, j, add = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				retrun (1);
			}
		}
		add += atoi(argv[i]);
	}
	printf("%d\n", add);
	return (0);
}
				
