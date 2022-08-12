#include <stdlib.h>
#include "function_pointers.h"
/**
* int_index - looks for an integer in array
* @array: array of integers
* @size: size of array
* @cmp: pointer to funcction
* Return: -1 or 0
*/
int int_index(int *array, int size, int (*cmp)(int))
{
int index;
if (array == NULL || cmp == NULL)
return (-1);
for (index = 0; index < size; index++)
{
if (cmp(array[index]) != 0)
return (index);
}
return (-1);
}
