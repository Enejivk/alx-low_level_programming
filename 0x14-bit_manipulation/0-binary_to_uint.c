#include <stdio.h>
#include "main.h"
/**
 * binary_to_uint- This function convert binary to unsigned int
 * @b: This holds the address of the the variable that stores binary
 *
 * Return: it returns and unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int i;

	if (b == NULL)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '0')
		{
			result = (result << 1);
		}
		else if (b[i] == '1')
		{
			result = (result << 1) + 1;
		}
		else
		{
			return (0);
		}
	}
	return (result);
}
