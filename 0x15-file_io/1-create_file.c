#include "main.h"
/**
 * create_file - this function creates a file
 * @filename: string pointer
 * @text_content: file content
 * Return: 1 on success and -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int read, written;

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
	return (-1);

	if (text_content == NULL)
		text_content = "";

	for (read = 0; text_content[read]; read++)
		;

	written = write(fd, text_content, read);

	if (written == -1)
	return (-1);

	close(fd);

		return (1);
}
