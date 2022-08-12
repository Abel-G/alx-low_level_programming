#include "function_pointers.h"
/**
* array_iterator - executes a function given as a parameter of an array
* @array: input array
* @size: size of the array
* @action: pointer to the function 
*/
void array_iterator(int *array, size_t size, void (*action)(int))
if (array == NULL || action == NULL)
return;
while (size-- > 0)
{
action(*array);
array++;
}
}
