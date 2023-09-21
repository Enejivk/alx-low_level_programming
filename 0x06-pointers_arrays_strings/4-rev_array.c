#include "main.h"
/**
 * reverse_array - This function reverse a string
 * @a: array
 * @n: number of elements of array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int vik;
	int t;

	for (vik = 0; vik < n--; vik++)
	{
		t = a[vik];
		a[vik] = a[n];
		a[n] = t;
	}
}

