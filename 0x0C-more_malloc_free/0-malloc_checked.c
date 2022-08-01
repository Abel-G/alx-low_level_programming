#include "main.h"
#include <stdlib.h>
/**
* malloc_checked - allocate memory
* @b: byte to be allocated
* Retrun: a pointer to the memory
*/
void *malloc_checked(unsigned int b)
{
int *p;
p = malloc(*p);
if (p == NULL)
{
exit(98);
}
return(p);
}
