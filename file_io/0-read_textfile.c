#include <stdio.h>
#include <stdlib.h>
#include "main.h"


/**
 * read_textfile - function reads a text file and prints it to standard output
 * @filename: file
 * @letters: number of letters to read and print
 *
 * Return: number of letters read and printed, 0 if fail
 */


ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, n_read, n_write;
	char *z;

	if (filename == NULL)
		return (0);
	z = malloc(letters * sizeof(char) + 1);
	if (!z)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(z);
		return (0);
	}
	n_read = read(fd, z, letters);
	if (n_read == -1)
	{
		free(z);
		return (0);
	}
	n_write = write(STDOUT_FILENO, z, n_read);
	close(fd);
	free(z);
	if (n_read == n_write)
		return (n_write);
	return (0);
}
