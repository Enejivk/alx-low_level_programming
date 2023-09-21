
#include "main.h"
/**
 * _strcmp - compare string values
 * @s1: destination
 * @s2: source
 *
 * Return: s1[i] - s2[i]
 */
int _strcmp(char *s1, char *s2)
{
	int V;

	V = 0;
	while (s1[V] != '\0' && s2[V] != '\0')
	{
		if (s1[V] != s2[V])
		{
			return (s1[V] - s2[V]);
		}
		V++;
	}
	return (0);
}

