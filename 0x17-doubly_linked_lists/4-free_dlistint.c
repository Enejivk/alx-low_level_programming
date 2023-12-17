#include "lists.h"
/**
	* free_dlistint- free allocated memmory
	*@head: This pointer to head;
	*Return: It returns nothing 
*/
void free_dlistint(dlistint_t *head)
{
dlistint_t *tmp;
while (head != NULL)
{
tmp = head;
head = head->next;
free(tmp);
}
}