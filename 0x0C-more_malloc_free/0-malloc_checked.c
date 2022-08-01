#include "main.h"
#include <stdlib.h>
/**
* malloc_checked - allocate memory
* @b: byte to be allocated
* Return: a pointer to the memory
*/
void *malloc_checked(unsigned int b)
{
void *p = malloc(b);
if (p == NULL)
{
exit(98);
}
return (p);
}
