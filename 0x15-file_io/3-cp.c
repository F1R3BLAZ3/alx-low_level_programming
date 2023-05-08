#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>

#define BUF_SIZE 1024

void exit_error(char *msg, char *file, int code)
{
	dprintf(STDERR_FILENO, msg, file);
	exit(code);
}

int main(int argc, char **argv)
{
	int fd_from, fd_to, read_count, write_count;
	char buffer[BUF_SIZE];

	if (argc != 3)
		exit_error("Usage: cp file_from file_to\n", "", 97);

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		exit_error("Error: Can't read from file %s\n", argv[1], 98);

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
		exit_error("Error: Can't write to %s\n", argv[2], 99);

	while ((read_count = read(fd_from, buffer, BUF_SIZE)) > 0)
	{
		write_count = write(fd_to, buffer, read_count);
		if (write_count != read_count)
			exit_error("Error: Can't write to %s\n", argv[2], 99);
	}

	if (read_count == -1)
		exit_error("Error: Can't read from file %s\n", argv[1], 98);

	if (close(fd_from) == -1)
		exit_error("Error: Can't close fd %d\n", fd_from, 100);

	if (close(fd_to) == -1)
		exit_error("Error: Can't close fd %d\n", fd_to, 100);

	return 0;
}
