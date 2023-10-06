#include "main.h"
#include <stdlib.h>
/**
*create_array- This function create streams of arrays
*@size: This size holds the size of memory to be allocated
*@c:This char is latter initialized with something else
*Return: it returns array
*/
char *create_array(unsigned int size, char c)
{
char *arrays;
unsigned int i;

arrays = malloc(sizeof(char) * size);
if (size == 0 || arrays == NULL)
return (NULL);
for (i = 0; i < size; i++)
arrays[i] = c;
return (arrays);
}
