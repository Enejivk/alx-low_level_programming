#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
*print_listint - This funtion print int data in the linklist
*@h: This holds the address of the content of the linklist
*Return: This function returns the number of the element
*/
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return(count);
}
