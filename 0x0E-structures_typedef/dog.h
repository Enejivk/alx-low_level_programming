#ifndef DOG_H
#define DOG_H
/**
*struct dog - This is structure descrips the feature of the dog
*@name: The name of the dog
*@age: the age of the dog
*@owner: the owner of the dog
*
*Description: This hods all the feature of the dog
*/
struct dog
{
char *name;
float age;
char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
typedef struct dog dog_t;
void free_dog(dog_t *d);
#endif
