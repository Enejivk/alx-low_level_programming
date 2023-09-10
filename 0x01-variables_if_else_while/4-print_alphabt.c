#include <stdio.h>
/**
 * main - this is the entry point of the code
 *
 * Return: return is always 0
 */
int main(void)
{
	char v;

	for (v = 'a'; v <= 'z'; v++)
	{
	if (v == 'q' || v == 'e')
	{
		continue;
	}
		putchar (v);
	}
		putchar('\n');
return (0);
}
