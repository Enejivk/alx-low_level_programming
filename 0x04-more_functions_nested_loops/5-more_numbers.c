#include "main.h"
/**
 * more_numbers- this is the entry point of the code
 * Description-this code print numbers in 10 times
 * Return: when sucessfull it return 0;
 */
void more_numbers(void)
{
	int i;
	int v;

	for (i = 0; i <= 9; i++)
	{
		for (v = 0; v <= 14; v++)
		{
			if (v >= 10)
			{
				_putchar('1');
			}
		_putchar(v % 10 + '0');
		}
		_putchar('\n');
	}
}
