#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point. Multiplies two numbers.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success, 1 on error.
 */
int main(int argc, char *argv[])
{
	int num1, num2, product;

	/* Check if the program received two arguments */
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	/* Convert the arguments to integers */
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	/* Multiply the two numbers */
	product = num1 * num2;

	/* Print the result */
	printf("%d\n", product);

	return (0);
}

