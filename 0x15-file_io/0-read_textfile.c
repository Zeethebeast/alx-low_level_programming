#include "main.h"
/**
 * read_textfile - this reads a file and print it
 *
 * @filename: string pointer
 * @letters: number of letters to be returned
 * Return: letters to be printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t read_n, written;
	char *buffer;


	if (filename == NULL)
	{
	return (0);
	}

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	return (0);

	read_n = read(fd, buffer, letters);
	close(fd);

	if (read_n == -1)
		return (0);

	written = write(STDOUT_FILENO, buffer, read_n);
	if (written == -1 || written != read_n)
		return (0);

	free(buffer);
	return (written);
}
