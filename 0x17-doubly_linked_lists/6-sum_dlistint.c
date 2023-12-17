#include "lists.h"
/**
	* sum_dlistint- Thpis function sum all the element of a linklist
	* @head: head contains the address of the first element
	* Return: it returns the sum of all the element 
*/
int sum_dlistint(dlistint_t *head)
{
int sum = 0;
if (head == NULL)
{
return 0;
}
while(head != NULL)
{
sum += head->n;
head = head->next;
}
return sum;
}