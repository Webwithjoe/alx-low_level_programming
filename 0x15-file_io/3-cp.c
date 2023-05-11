#include "main.h"

/**
 * main - prog copies content of a file to another file
 * @argc: num of args passed to the program
 * @argv: array of args
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int fd_r, fd_w, x, u, v; /*Variable declaration*/
	char buf[BUFSIZ];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_r = open(argv[1], O_RDONLY);
	if (fd_r < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd_w = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((x = read(fd_r, buf, BUFSIZ)) > 0) /*while loop*/
	{
		if (fd_w < 0 || write(fd_w, buf, x) != x)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(fd_r);
			exit(99);
		}
	}
	if (x < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	u = close(fd_r);
	v = close(fd_w);
	if (u < 0 || v < 0)
	{
		if (u < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_r);
		if (v < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_w);
		exit(100);
	}
	return (0);
}
