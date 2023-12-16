#include "lists.h"
/**
 * print_dlistint- print the content of a doubly linklist
 * @h: pointer to the head
 * Return: It returns the total number of linklist
 */
size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}

