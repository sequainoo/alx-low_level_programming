#include "main.h"

/**
 * free_and_return - frees buffer and returns 0
 * @buffer: a pionter to the buffer
 * return: 0 for the error conditions
 */
int free_and_return(char *buffer, int fd)
{
	free(buffer);
	close(fd);
	return (0);
}

/**
 * read_textfile - reads from a text file on to stdout
 * @filename: the name of the file to read
 * @letters: the number of letters to read from file
 * return: the number of letters read or 0 if error
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	int chars_read, chars_written;
	char *buffer;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);
	buffer = malloc(((sizeof (char)) * letters) + 1);

	if (buffer == NULL)
		return (0);

	if ((chars_read = read(fd, buffer, letters)) == -1)
		return (free_and_return(buffer, fd));

	chars_written = write(STDOUT_FILENO, buffer, chars_read);
	if (chars_written < chars_read || chars_written == -1)
		return (free_and_return(buffer, fd));

	free(buffer);
	close(fd);
	return (chars_written);
}
