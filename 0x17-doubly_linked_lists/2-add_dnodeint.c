#include "lists.h"

/**
 * add_dnodeint - Add element at the beginning of a dlistint_t list.
 * @head: Double pointer to the head.
 * @n: Value to be stored in the new node.
 * Return: Address of the new node, or NULL if it fails.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
{
return (NULL);
}
new_node->n = n;
new_node->next = NULL;
new_node->prev = NULL;
if (*head != NULL)
{
(*head)->prev = new_node;
new_node->next = *head;
}
*head = new_node;
return (new_node);
}
