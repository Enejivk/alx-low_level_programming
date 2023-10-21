#include <stddef.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - This function prints all the elements of the linked list.
 * @h: a pointer to the head of the linked list
 * Return: This function returns a counter with the total number of nodes.
 */
size_t print_list(const list_t *h)
{
size_t counter = 0;

if (h == NULL
{
return (0);
}

while (h != NULL)
{
if (h->str == NULL)
{
printf("[0] (nil)\n");
}
else
{
printf("[%lu] %s\n", (unsigned long)h->len, h->str);
}
h = h->next;
counter++;
}

return (counter);
}
