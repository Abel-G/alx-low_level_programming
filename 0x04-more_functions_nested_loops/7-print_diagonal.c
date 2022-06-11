#include "main.h"
/**
* print_diagonal - print diagonal line
* @n: integer input
* Return: void
*/
void print_diagonal(int n)
{
int j;
int i = 0;
while (i <= n && n > 0)
{
for (j = 0; j < n; j++)
{
if (i == j)
{
_putchar('\\');
}
else
{
_putchar(' ');
}
}
_putchar('\n');
  i++;
}
}
