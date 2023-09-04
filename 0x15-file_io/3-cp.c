#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - allocates 1024 bytes for a buffer
 * @file: the name of the file buffer is storing chars for
 *
 * Return: a pointer to the newly allocated buffer
 */
char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer);
}

/**
 * close_file - closes file descriptors
 * @fd: the file descriptor to be closed
 */
void close_file(int fd)
{
	int c;

	c = close(fd);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can' close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - copies the contents of a file to another file
 * @argc: the number of arguments supplied to the program
 * @argv: an array of pointers to the arguments
 *
 * Return: 0 on success
 *
 * Description: if the arguments count is incorrect - exit code 97
 * if file_from does not exist or can't be read - exit code 98
 * if file_to can't be created or written to - exit code 99
 * if file_to or file_from can't be closed - exit code 10
 */
int main(int argc, char *argv[])
{
	int cpfrom, cpto, fileread, filewrite;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	cpfrom = open(argv[1], O_RDONLY);
	fileread = read(cpfrom, buffer, 1024);
	cpto = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (cpfrom == -1 || fileread == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		filewrite = write(cpto, buffer, fileread);
		if (cpto == -1 || filewrite == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't read from file %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		fileread = read(cpfrom, buffer, 1024);
		cpto = open(argv[2], O_WRONLY | O_APPEND);

	} while (fileread > 0);

	free(buffer);
	close_file(cpfrom);
	close_file(cpto);

	return (0);
}
