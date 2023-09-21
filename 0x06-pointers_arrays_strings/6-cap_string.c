#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The string to be capitalized.
 *
 * Return: A pointer to the changed string.
 */
char *cap_string(char *str)
{
	int vik = 0;

	while (str[vik])
	{
		while (!(str[vik] >= 'a' && str[vik] <= 'z'))
			vik++;

		if (str[vik - 1] == ' ' ||
		    str[vik - 1] == '\t' ||
		    str[vik - 1] == '\n' ||
		    str[vik - 1] == ',' ||
		    str[vik - 1] == ';' ||
		    str[vik - 1] == '.' ||
		    str[vik - 1] == '!' ||
		    str[vik - 1] == '?' ||
		    str[vik - 1] == '"' ||
		    str[vik - 1] == '(' ||
		    str[vik - 1] == ')' ||
		    str[vik - 1] == '{' ||
		    str[vik - 1] == '}' ||
		    vik == 0)
			str[vik] -= 32;

		vik++;
	}

	return (str);
}

