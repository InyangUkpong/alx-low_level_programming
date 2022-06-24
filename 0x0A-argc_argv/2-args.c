#include <stdio.h>

/**
 * main - prints out all the arguments passed into main
 * @argc: conts of command line arguments
 * @argv: array name
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("s%\n", argv[i]);

	return (0);
}
