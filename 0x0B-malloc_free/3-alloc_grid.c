#include "main.h"
#include <stdlib.h>
/**
* alloc_ grid - returns a pointer to a 2 dimensional array
* @width: array width
* @height: array height
* Return: 2 dimensional array
*/
int **alloc_grid(int width, int height)
{
int x, y, z, l;
int **a;
if (width <= 0 || height <= 0)
return (NULL);
a = malloc(height * sizeof(int *))
if (a == NULL)
free(a);
return (NULL);
for (x = 0; x < height; x++)
{
a[x] = malloc(width * sizeof(int))
if (a[x] == NULL)
{
for (y = x; y > 0; y--)
{
free(a[y]);
free(a);
return (NULL);
}
}
}
for (z = 0; z < height; z++)
{
for (l = 0; l < width; l++)
a[z][l] = 0;
}
return (a);
}
