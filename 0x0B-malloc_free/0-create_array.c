#include "main.h"
#include <stdlib.h>
/**
* create_array - create array of chars
* @size: size of the array
* @c: char to initialize
* Return: null or pointer to the array
*/
char *create_array(unsigned int size, char c)
{
char *arr;
unsigned int i;
if  (size == 0)
return (NULL);
arr = malloc(sizeoof(char) * size);
if (arr == NULL)
return (NULL);
for (i = 0; i < size; i++)
arr[i] = c;
return (arr);
}
