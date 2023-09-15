#include "main.h"
/**
*print_diagonal - This is the name of the function
*@n: This is the placeholder
*/
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar ('\n');
	}
	else
	{
		int i, v;

		for (i = 0; i < n; i++)
		{
			for (v = 0; v < n; v++)
			{
				if (v == i)
				{
					_putchar('\\');
				}
				else
				{
					_putchar(' ');
				}
			}
		_putchar ('\n');
		}
	}
}
