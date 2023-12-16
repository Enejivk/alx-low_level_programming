#include "lists.h"
/**
 * dlistint_len- return the number of element in a link list
 * @h: pointer to the head
 * Return: It returns the total number of linklist
 */
size_t dlistint_len(const dlistint_t *h)
{
int count = 0;
while (h != NULL)
	{
	count++;
	h = h->next;
}
return (count);
}
