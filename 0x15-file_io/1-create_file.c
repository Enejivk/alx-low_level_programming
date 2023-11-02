#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <string.h>
#include <unistd.h>
/**
 * create_file- This function create a file
 * @filename: This takes the name of file created
 * @text_content: this holds the content of the file created
 * Return: It return 1;
 */
int create_file(const char *filename, char *text_content)
{
	int fd, byte_writ;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		byte_writ = write(fd, text_content, strlen(text_content));
	}
	if (byte_writ == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
