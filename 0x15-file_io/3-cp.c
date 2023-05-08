#define _POSIX_C_SOURCE 200809L
#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#include "main.h"

#define BUFFER_SIZE 1024

void error_exit(int exit_code, const char *message, const char *arg);

int main(int argc, char *argv[])
{
	int file_from, file_to, bytes_read, bytes_written;
	char buffer[BUFFER_SIZE];
	char file_from_str[12], file_to_str[12];

	if (argc != 3)
	{
		error_exit(97, "Usage: cp file_from file_to\n", "");
	}

	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		error_exit(98, "Error: Can't read from file %s\n", argv[1]);
	}

	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_to == -1)
	{
		error_exit(99, "Error: Can't write to %s\n", argv[2]);
	}

	while ((bytes_read = read(file_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(file_to, buffer, bytes_read);
		if (bytes_written != bytes_read)
		{
			error_exit(99, "Error: Can't write to %s\n", argv[2]);
		}
	}

	if (bytes_read == -1)
	{
		error_exit(98, "Error: Can't read from file %s\n", argv[1]);
	}

	if (close(file_from) == -1)
	{
		sprintf(file_from_str, "%d", file_from);
		error_exit(100, "Error: Can't close fd %s\n", file_from_str);
	}

	if (close(file_to) == -1)
	{
		sprintf(file_to_str, "%d", file_to);
		error_exit(100, "Error: Can't close fd %s\n", file_to_str);
	}

	return 0;
}

void error_exit(int exit_code, const char *message, const char *arg)
{
	dprintf(STDERR_FILENO, message, arg);
	exit(exit_code);
}
