#include "lists.h"
/**
 *add_dnodeint- Add element in the begining
 * @head: double pointer to head
 * @n: contain the value be passed to the new new node
 *Return: It returns the address of the new_node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = (dlistint_t *)malloc(sizeof(dlistint_t));
if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (0);
	}
	(*head)->prev = new_node;
	new_node->next = *head;
	*head = new_node;
	
return (new_node);
}
