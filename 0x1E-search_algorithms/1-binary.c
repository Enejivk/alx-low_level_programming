#include "search_algos.h"
/**
*binary_search-this calls the function that perform recursive binary search
*@array: This contain the list to be search
*@value: The target value
*@size: The size of the array
*Return: This return the match
*/
int binary_search(int *array, size_t size, int value)
{
size_t left = 0;
size_t right = size - 1;
size_t mid;
size_t i;

while (left <= right)
{
printf("Searching in array: ");
for (i = left; i < right + 1; i++)
printf("%d, ", array[i]);
printf("\n");
mid = (left + right) / 2;
if (array[mid] == value)
{
return (mid);
}
if (array[mid] < value)
{
left = mid + 1;
}
else
{
right = mid + 1;
}
}
return (-1);
}
