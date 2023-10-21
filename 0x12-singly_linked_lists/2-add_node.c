#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
*add_node- this function add a node at the begining
*@head: is a poineter to the address of head, poiner to a pointer
*@str: This is a pointer to the strings
*Return: It returns a new node
*/

list_t *add_node(list_t **head, const char *str)
{
list_t *tmp;
tmp = (list_t *) malloc(sizeof(list_t));
if (tmp == NULL)
{
printf("fail to allocate memmory");
exit(1);
}
tmp->str = strdup(str);
if (tmp->str == NULL)
{
printf("faile to duplicate");
exit(1);
}
tmp->len = strlen(tmp->str);
tmp->next = *head;
*head = tmp;
return (tmp);
}
