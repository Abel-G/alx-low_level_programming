#include "main.h"
#include <stdio.h"
/**
* print_diagsums - print sum of diagonals
* @a: integer
* @size: size of matrix
* Return: void
*/
void print_diagsums(int *a, int size)
{
int x, s1 = 0, s2 = 0;
for (x = 0; x < size; x++)
{
s1 += a[x];
a += size;
}
a -= size;
for (x = 0; x < size; x++)
{
s2 += a[x];
a -= size;
}
printf("%d, %d\n", s1, s2);
}
