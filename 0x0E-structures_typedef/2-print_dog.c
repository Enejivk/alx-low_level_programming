#include <stdio.h>
#include "dog.h"
/**
*print_dog- This is the name of the function
*@d: this the address of the element
*/
void print_dog(struct dog *d)
{
if (d != NULL)
{
printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");
printf("Age: %.6f\n", (d->age >= 0) ? d->age : 0.0);
printf("Owner: %s\n", (d->owner != NULL) ? d->owner : "(nil)");
}
}
