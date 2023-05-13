#include "search_algos.h"

/**
* linear_search - searches for a value in an array of integers using
* the Linear search algorithm
*
* @array: pointer to the first element of the array to search in
* @size: the number of elements in array
* @value: value to search for in array
* Return: first index where value is located, (-1) if array is NULL or
*/
int linear_search(int *array, size_t size, int value)
{
if (array == NULL)
return (-1);
int i;
for (i = 0; i < (int)size; i++)
{
printf("Value checked array[%d] = [%d]\n", i,  array[i]);
if (array[i] == value)
return (i);
}
return (-1);
}
