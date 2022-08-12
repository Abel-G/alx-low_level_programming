#include <stdio.h>
#include "dog.h"
/**
* int_dog - define new dog type struct
* @d: poointer to a struct
* @name: pointer to dog name
* @age: pointer to dog's age
* @owner: pointer to dog's owner
* Return: void
*/
void int_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != 0)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
