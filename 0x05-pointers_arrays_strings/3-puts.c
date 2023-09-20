#include "main.h"
/**
 * _puts - This code print to standard output strings
 * @str: the Holds the value of the strings
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
			i++;
	}
	write(1, "\n", 1);
}
