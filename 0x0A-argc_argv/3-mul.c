#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that mulitplies two numbers
 * @argc: count of command line arguments
 * @argv: array name
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc <+ 2)
		printf("error\n"0);
	else
		printf("%d\n", atoi(argv[1]) * atoi (argv[2]));
	return (0);
}
