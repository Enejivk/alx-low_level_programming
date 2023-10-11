#include "dog.h"
#include <stdlib.h>
/**
*free_dog- This is the name of the function
*@d: this holds the value of all the element
*/
void free_dog(dog_t *d)
{
if (d != NULL)
{
free(d->name);
free(d->owner);
free(d);
}
}
