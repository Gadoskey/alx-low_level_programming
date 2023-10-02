#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#define BUF_SIZE 1024
/**
 * exit_with_message - exit program
 * @code: The code
 * @message: The message
 */
void exit_with_message(int code, const char *message)
{
	dprintf(2, "%s\n", message);
	exit(code);
}
/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the command-line arguments.
 *
 * Return: 0 on success, or exit with an error code.
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	ssize_t bytes_read, bytes_written;
	char buffer[BUF_SIZE];

	if (argc != 3)
	{
		exit_with_message(97, "Usage: cp file_from file_to");
	}
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		exit_with_message(98, "Error: Can't read from file NAME_OF_THE_FILE");
	}
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		close(fd_from);
		exit_with_message(99, "Error: Can't write to file NAME_OF_THE_FILE");
	}
	while ((bytes_read = read(fd_from, buffer, BUF_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1 || bytes_written != bytes_read)
		{
			close(fd_from);
			close(fd_to);
			exit_with_message(99, "Error:Can't write to file NAME_OF_THE_FILE");
		}
	}
	if (bytes_read == -1)
	{
		close(fd_from);
		close(fd_to);
		exit_with_message(98, "Error:Can't read from file NAME_OF_THE_FILE");
	}
	return (0);
}
