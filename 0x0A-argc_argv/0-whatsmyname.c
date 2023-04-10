#include <stdio.h>

/**
 * main - prints the name of the program
 *
 * @argc: the number of arguments (unused)
 * @argv: an array of pointers to the arguments
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}