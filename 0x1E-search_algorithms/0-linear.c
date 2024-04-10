#include "search_algos.h"
/**
 *linear_search - perform a linear search on unsorted array
 *@array: list of arrays to be searched
 *@size: The size of the array
 *@value: The target Value to return
 *Return: It return a match value
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return ((int)i);
		}
	}
	return (-1);
}
