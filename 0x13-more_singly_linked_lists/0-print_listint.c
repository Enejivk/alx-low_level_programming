#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
*print_listint - This funtion print int data in the linklist
*@h: This holds the address of the content of the linklist
*Return: This function returns the number of the element
*/
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
