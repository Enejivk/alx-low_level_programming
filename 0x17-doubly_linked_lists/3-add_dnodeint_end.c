#include "lists.h"
/**
	* add_dnodeint_end- Add element at the end
	* @head: This is the pointer to the pointer of the first node
	* @n: This is the number to be initialized with the new_node
	* Return: It returns a pointer to the node created
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new_node = malloc(sizeof(dlistint_t));
dlistint_t *tmp = *head;

if (new_node == NULL)
{
return (NULL);
}
new_node->next = NULL;
new_node->n = n;
new_node->prev = NULL;
if (*head == NULL)
{
*head = new_node;
}
else
{
while (tmp->next != NULL)
{
tmp = tmp->next;
}
tmp->next = new_node;
new_node->prev = tmp;
}
return (new_node);
}
