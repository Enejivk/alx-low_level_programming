#include "main.h"
/**
 * _strncat - This function add two strings together
 * using at most n bytes from src
 * @dest: This is the destination of the cocatenation
 * @src: This is the source of the concatenation
 * @n: input value
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int vik;
	int j;

	vik = 0;
	while (dest[vik] != '\0')
	{
		vik++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
	dest[vik] = src[j];
	vik++;
	j++;
	}
	dest[vik] = '\0';
	return (dest);
}


