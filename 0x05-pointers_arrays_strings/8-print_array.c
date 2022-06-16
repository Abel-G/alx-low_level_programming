#include <stdio.h>
#include "main.h"
/**
* print_array - print elements of the array
* @a: the array pointer
* @n: the number of elements
* Return: void
*/
void print_array(int *a, int n)
{
int i;
for (i = 0; i <= n; i++)
{
printf("%d", a[i]);
if (n > 0)
{
printf(", ");
}
}
}
