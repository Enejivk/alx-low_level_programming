#include <stdio.h>
#include "main.h"
/**
 * get_bit-This function get a bit at a particular index;
 * @n: This contain the decimal number
 * @index: This is the position you should return
 * Return: it returns the specific index indicated
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	return ((n >> index) & 1);
}
