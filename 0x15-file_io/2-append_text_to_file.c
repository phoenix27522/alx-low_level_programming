#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: Pointer to the name of the file.
 * @text_content: The string to add to the end of the file.
 *
 * Return: On success, 1. On failure, -1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fileopen, filewrite, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	fileopen = open(filename, O_WRONLY | O_APPEND);
	filewrite = write(fileopen, text_content, len);

	if (fileopen == -1 || filewrite == -1)
		return (-1);

	close(fileopen);

	return (1);
}
