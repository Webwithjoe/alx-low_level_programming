#include "main.h"


/**
 * read_textfile - FUNC reads a text file and prints it to the std output
 * @filename: name of file to be read
 * @letters: num of letters to read and print
 * Return: the number of letters printed, or 0 if otherwise
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	int a, e;
	char *buff;

	/* if statements*/
	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);
	buff = malloc(sizeof(char) * letters);
	if (!buff)
		return (0);
	a = read(fd, buff, letters);
	if (a < 0)
	{
		free(buff);
		return (0);
	}
	buff[a] = '\0';
	close(fd);
	e = write(STDOUT_FILENO, buff, a);
	if (e < 0)
	{
		free(buff);
		return (0);
	}
	free(buff);
	return (e);
}
