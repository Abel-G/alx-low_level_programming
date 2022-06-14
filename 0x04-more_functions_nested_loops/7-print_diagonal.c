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
j = 0;
while (j < i)
{
_putchar(' ');
j++;
}
_putchar('\\');
_putchar('\n');
i++;
}
if(i == 0)
_putchar('\n');
i++;
}
