#include "main.h"

/**
 * create_file - func creates a file
 * @filename: file to create
 * @text_content: This is file content_to write
 *
 * Return: 1 if successful and -1 if it fails
 */
int create_file(const char *filename, char *text_content)
{
	int fd, u, v = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	if (fd < 0)
		return (-1);

	if (text_content)
	{
		while (text_content[v])
			v++;
		u = write(fd, text_content, v);
		if (u != v)
			return (-1);
	}

	close(fd);

	return (1);
}
