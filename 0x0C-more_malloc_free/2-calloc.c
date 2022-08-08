#include "main.h"
#include <stdlib.h>
/**
* _calloc - Allocates memory for an array of a certain number
* @nmemb: The number of elements.
* @size: The byte size of each array element.
* Return: If nmemb = 0, size = 0, or the function fails - NULL else pointer to the memory.
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *mm;
char *f;
unsigned int index;
if (nmemb == 0 || size == 0)
return (NULL);
m = malloc(size * nmemb);
if (mm == NULL)
return (NULL);
f = mm;
for (index = 0; index < (size * nmemb); index++)
filler[index] = '\0';
return (mm);
}
