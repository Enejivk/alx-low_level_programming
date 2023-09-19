#include "main.h"
/**
 * swap_int - This function swaps the value of two variables
 * @a: This variable hold the value 98 but will will be swap with b
 * @b: This hold the value 42 but will be swaped with a
 */
void swap_int(int *a, int *b)
{
	int vik;
	vik = *a;
	*a = *b;
	*b = vik;
}
