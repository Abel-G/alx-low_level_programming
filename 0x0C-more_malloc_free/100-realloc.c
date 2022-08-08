#include "main.h"
#include <stdlib.h>
/**
* _realloc - reallocate memory block
* @ptr: pointer previos memory
* @old_size: size of allocated space
* @new_size: size for new memory
* Return: Null or pointer to the rallocated memory
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
void *m;
char *p, *c;
unsigned int i;
if (new_size == old_size)
return (ptr);
if (ptr == NULL)
{
m = malloc(new_size);
if (m == NULL)
return (NULL);
return (m);
}
if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}
p = ptr;
m = malloc(sizeof(*p) * new_size);
if (m == NULL)
{
free(ptr);
return (NULL);
}
f = m;
for (i = 0; i < old_size && i < new_size; i++)
f[i] = *p++;
free(ptr);
return (m);
}
