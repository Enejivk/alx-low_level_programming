#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"
/**
 * read_textfile- this function read and write to stdout
 * @filename: this locate the position of the file
 * @letters: this holds the number of letter to be printed
 * Return: It returns n when succeful
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t written, n;
	char *buffer;

	if (filename == NULL)
	{
		return 0;
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return 0;
	}
	buffer = malloc(letters);
	n = read(fd, buffer, letters);

	if (n == -1)
	{
		close(fd);
		return 0;
	}
	close(fd);

	written = write(STDOUT_FILENO, buffer, n);
	if (written != n)
	{
		return 0;
	}
	return n;
}
