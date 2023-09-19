#include "main.h"
/**
 *_strlen - This function checks the lengt of string
 *@s: This is the formal parameter that holds the variable passed
 *Return: This code returns len to the main funtion
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}
