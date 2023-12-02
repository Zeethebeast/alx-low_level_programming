#include "main.h"
/**
 * append_text_to_file - function that appends a file at the end of a file
 * @filename: the name of the file
 * @text_content: content to be appended
 * Return: 1 if successful and -1 if it fails.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int letters;
	int writting;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (text_content)
	{
		for (letters = 0; text_content[letters]; letters++)
			;
		writting = write(fd, text_content, letters);

		if (writting == -1)

			return (-1);

	}
	close(fd);

	return (1);
}
