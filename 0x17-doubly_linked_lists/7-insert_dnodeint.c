#include "lists.h"
/**
 * insert_dnodeint_at_index- add node at a specific index
 * @h: pointer to pointer to head
 * @idx: index where the value will be added
 * @n: the value to be added to the node that was inserted
 * Return: it returns address to the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
unsigned int i;
dlistint_t *new_node = (dlistint_t *)malloc(sizeof(dlistint_t));
dlistint_t *tmp = *h;

if (new_node == NULL && *h == NULL)
{
return (NULL);
}
new_node->n = n;
if (idx == 0)
{
if(*h != NULL)
{
(*h)->prev = new_node;
}
new_node->next = *h;
*h = new_node;
return (new_node);
}
else
{
for (i = 0; tmp != NULL && i < idx; i++)
{
tmp = tmp->next;
}
new_node->next = tmp;
new_node->prev = tmp->prev;
tmp->prev->next = new_node;
tmp->prev = new_node;
return (new_node);
}
}
