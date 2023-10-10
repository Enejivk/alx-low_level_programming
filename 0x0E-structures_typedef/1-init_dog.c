#include "dog.h"
/**
*init_dog - This is the title of the fuction
*@d :This is the pointer to the dog varibel
*@name: the element that holds the name
*@age: the element that holds the age
*@owner: this hols the name of the owner
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
d->name = name;
d->age = age;
d->owner = owner;
}
