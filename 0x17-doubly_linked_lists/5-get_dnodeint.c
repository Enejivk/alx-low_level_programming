#include "lists.h"
/**
	* get_dnodeint_at_index- It returns element at a specific index
	* @index: The position to be returned
	* Return: It returns the a node at that specific index
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
dlistint_t *current_node = head;
unsigned int current_nodeIndex = 0;

while (current_node != NULL)
{
if (current_nodeIndex == index)
{
return (current_node);
}
current_node = current_node->next;
current_nodeIndex++;
}
return (NULL);
}
