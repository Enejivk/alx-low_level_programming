
#include "main.h"
/**
 * string_toupper - This function changes everything to lower case
 * @n: pointer
 *
 * Return: n
 */
char *string_toupper(char *n)
{
	int vik;

	vik = 0;
	while (n[vik] != '\0')
	{
		if (n[vik] >= 'a' && n[vik] <= 'z')
			n[vik] = n[vik] - 32;
		vik++;
	}
	return (n);
}

