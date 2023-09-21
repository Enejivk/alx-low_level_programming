#include "main.h"
/**
 * _strcat - This concatenation function combines two value
 * @dest: this  is the destination of the combination
 * @src: This is the source code of the destination
 *
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int v;
	int j;

	v = 0;
	while (dest[v] != '\0')
	{
		v++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[v] = src[j];
		v++;
		j++;
	}

	dest[v] = '\0';
	return (dest);
}

