#include "main.h"
/**
 * print_rev - imprime en reversa
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
	int v, j, l;

	x = 0;

	while (s[v] != '\0')
	{
		v++;
	}
	l = v;
	for (j = l - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
