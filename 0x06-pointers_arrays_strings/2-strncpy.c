#include "main.h"
/**
 * _strncpy - This functin copy two strings
 * @dest: this is the destination
 * @src: This is the source
 * @n: input value
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int vik;

	vik = 0;
	while (vik < n && src[vik] != '\0')
	{
		dest[vik] = src[vik];
		vik++;
	}
	while (vik < n)
	{
		dest[vik] = '\0';
		vik++;
	}

	return (dest);
}

