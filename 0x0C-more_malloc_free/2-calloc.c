#include "main.h"
#include <stdlib.h>
/**
* _calloc - Allocates memory for an array of a certain number
* @nmemb: The number of elements.
* @size: The byte size of each array element.
* Return: NUL or pointer to the memory.
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *memo;
char *c;
unsigned int i;
if (nmemb == 0 || size == 0)
return (NULL);
memo = malloc(size * nmemb);
if (memo == NULL)
return (NULL);
c = memo;
for (i = 0; i < (size * nmemb); i++)
c[i] = '\0';
return (memo);
}
