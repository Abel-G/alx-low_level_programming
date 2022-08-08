#include "main.h"
#include <stdlib.h>
/**
* arrat_range - create array of int ordered from min to max
* @min: first value
* @max: last value
* Return: NULL or pointer to the array
*/
int *array_range(int min, int max)
{
int *a, i = 0;
if (min > max)
return (NULL);
a = malloc((sizeof(int) * (max - min)) + sizeof(int));
if (a == NULL)
return (NULL);
while (min <= max)
{
a[i] = min;
i++;
min++; 
}
return (a);
}
