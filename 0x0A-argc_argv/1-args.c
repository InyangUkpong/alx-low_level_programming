#include <stdio.h>

/**
 * main - prints the arguments passed into the main
 * @argc: number of counts
 * @argv: array of strings
 * Return: 0
 */

int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	argv[0] = 0;
	return (0);
}
