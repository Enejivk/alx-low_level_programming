#include "main.h"
/**
 * print_alphabet_x10()- The defination of our function
 * Description-This code print 10 times of alphabet
 * Return: Alwys return 0;
 */
void print_alphabet_x10(void)
{
	int i;
	char j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
