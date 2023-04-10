#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 * @argc: number of command line arguments
 * @argv: array containing the command line arguments
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
