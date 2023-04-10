#include <stdio.h>

/**
 * main - Entry point
 * @argc: Number of command line arguments
 * @argv: An array containing the command line arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;

	/* Print out the number of arguments passed in */
	printf("Number of arguments: %d\n", argc);

	/* Print out each argument passed in */
	for (i = 0; i < argc; i++)
	{
		printf("Argument %d: %s\n", i, argv[i]);
	}

	return (0);
}
