#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
*List_len- This functioon get the length of a linklist
*@h: pointer to the head node
*Return: it returns count
*/
size_t list_len(const list_t *h)
{
size_t count = 0;
while(h != NULL)
{
h = h->next;
count++;
}
return (count);
}
