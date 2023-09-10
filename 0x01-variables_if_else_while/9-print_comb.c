#include <stdio.h>
/**
 * main - this is the entry point of the code
 *
 * Return: return is always 0
 */
int main(void)
{
	char v;

	for (v = 48; v < 58; v++)
	{
		putchar (v);
		putchar (',');
		putchar (' ');
	}
		putchar('\n');
return (0);
}
