#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
*new_dog- this is the identity of the dog
*@name: holds the name of the dog
*@age: hold the age of the dog
*@owner: holds the name of the owner of the dog
*malloc: allocate n memmory
*Return: it returns dog
*/
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new_dog = malloc(sizeof(dog_t));
if (new_dog == NULL)
{
return (NULL);
}
new_dog->name = name;
new_dog->age = age;
new_dog->owner = owner;
return (new_dog);
}
