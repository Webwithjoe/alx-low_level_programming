#include "main.h"

/**
 * append_text_to_file - FUNC appends text at the end of a file
 * @filename: Given filenmae
 * @text_content: Added content
 *
 * Return: 1 if the file exists. -1 if the fails doesnt exist
 * or if it fails.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int u;
	int v;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (u = 0; text_content[u]; u++)
			;

		v = write(fd, text_content, u);

		if (v == -1)
			return (-1);
	}

	close(fd);

	return (1);
}
