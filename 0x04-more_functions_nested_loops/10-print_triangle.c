#include "main.h"
/**
* print_trinagle -  print triangle
* @n: integer input
* Return: void
*/
void print_triangle(int n)
{
int i = 1;
int j;
while (i <= n && n > 0)
{
j = 0;
while (j < n - 1)
{
_putchar(' ');
j++;
}
j = 0;
while (j < i)
{
_putchar('#');
j++;
}
_putchar('\n');
i++;
}
if (i == 1)
_putchar('\n');
}
