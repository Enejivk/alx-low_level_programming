#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_listint2- This function free the linklist and return NULL
 * @head: A pointer to the first head pointer
 */
void free_listint2(listint_t **head)
{
	listint_t *cur;
	listint_t *next;

	if (head == NULL)
		return;

	cur = *head;
	while (cur != NULL)
	{
		next = cur->next;
		free(cur);
		cur = next;
	}
	*head = NULL;
}
