#ifndef DOG_H
#DEFINE DOG_H
/**
* File: dog.h
* Description: header file
*/
/**
* struct dog - A struct type of  dog.
* @name: name of the dog.
* @age: age of the dog.
* @owner: owner of the dog.
*/
struct dog
{
char *name;
float age;
char *owner;
};
typedef struct dog dog_x;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
