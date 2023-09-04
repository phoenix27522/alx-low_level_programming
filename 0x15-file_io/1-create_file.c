#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: A pointer to the name of the file to create.
 * @text_content: A pointer to a string to write to the file.
 *
 * Return: If the function fails - -1.
 *         Otherwise - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int fileopen, filewrite, len;

	if (filename == NULL)
		return (-1);

	fileopen = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fileopen == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; len != '\0'; len++)
			;
		filewrite = write(fileopen, text_content, len);
		if (filewrite == -1)
		{
			close(fileopen);
			return (-1);
		}
	}
	close(fileopen);
	return (1);
}
