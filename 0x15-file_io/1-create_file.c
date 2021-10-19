#include "main.h"

/**
 * create_file - creates a file with read and write permision
 * @filename: name of file to create
 * @text_content: the content to write to the file
 * Return: 1 upon success and -1 upon failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, len;
	char *pos;
	int b_written;

	if (filename == NULL)
		return (-1);

	/* if not exists create with rw and open in write and trunc mode */
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	/* if text content is empty dont write anything */
	if (text_content == NULL)
		return (1);

	/* find number of bytes to write */
	len = 0;
	pos = text_content;
	while (pos[len++] != '\0')
		;

	/* write to file */
	b_written = write(fd, text_content, len);
	if (b_written == -1)
		return (-1);

	return (1);
}
