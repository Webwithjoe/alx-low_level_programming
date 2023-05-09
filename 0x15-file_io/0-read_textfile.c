#include "main.h"
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>


/**
 * read_textfile - FUNC reads a text file and prints it to the std output
 * @filename: name of file to be read
 * @letters: num of letters to read and print
 * Return: the number of letters printed, or 0 if otherwise
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t lthr, lthw;
	char *buffer;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
	{
		close(fd);
		return (0);
	}
	lthr = read(fd, buff, letters);
	close(fd);
	if (lthr == -1)
	{
		free(buff);
		return (0);
	}
	lthw = write(STDOUT_FILENO, buff, lthr);
	free(buff);

	if (lthr != lthw)
		return (0);
	return (lthw);
}
