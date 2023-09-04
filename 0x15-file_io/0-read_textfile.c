#include "main.h"
#include <stdlib.h>
/**
 * read_textfile - Reads a text file and prints it to POSIX stdout.
 * @filename: A pointer to the name of the file.
 * @letters: The number of letters the function should read and print.
 *
 * Return: function fails or filename is NULL - 0.
 *         O/w -the actual num of bytes the function can read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fileopen;
	int fileread;
	int filewrite;
	char *buffer;

	if (filename == NULL)
		return (0);

	fileopen = open(filename, O_RDONLY);
	if (fileopen == -1)
		return (0);

	buffer = (char *)malloc(letters);
	if (buffer == NULL)
		return (0);

	fileread = read(fileopen, buffer, letters);
	if (fileread == -1)
	{
		free(buffer);
		close(fileopen);
		return (0);
	}
	filewrite = write(STDOUT_FILENO, buffer, fileread);
	if (filewrite == -1 || filewrite != fileread)
	{
		free(buffer);
		close(fileopen);
		return (0);
	}
	free(buffer);
	close(fileopen);
	return (fileread);
}
