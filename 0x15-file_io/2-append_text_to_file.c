#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * append_text_to_file- This function add the content to the end of the file
 * @filename: The name of the file that will get append
 * @text_content: The content of the file that will get append
 * Return: It returns -1 when unsuccefull but return 1 when successful
 */
int append_text_to_file(const char *filename, char *text_content)
{
	FILE *file;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		return (1);
	}
	file = fopen(filename, "a");
	if (file == NULL)
	{
		return (-1);
	}
	if (fputs(text_content, file) == EOF)
	{
		fclose(file);
		return (-1);
	}
	fclose(file);
	return (1);
}
