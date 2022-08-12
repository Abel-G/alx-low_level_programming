#include <stdlib.h>
#include "dog.h"
/**
* init_dog - define new dog type struct
* @d: poointer to a struct
* @name: pointer to dog name
* @age: pointer to dog's age
* @owner: pointer to dog's owner
* Return: void
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
