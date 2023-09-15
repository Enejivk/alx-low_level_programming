#include "main.h"
/**
 *print_square- This is the entry point of the code
 *@size: this is the place holder used in the iteration
 */
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, v;

		for (i = 0; i < size; i++)
		{
			for (v = 0; v < size; v++)
			{
				_putchar('#');
			}
			_putchar ('\n');
		}

	}
}
