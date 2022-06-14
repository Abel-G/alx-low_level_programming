#include "main.h"
/**
* print_square - prints square
* @size: integer input
* Return: void
*/
void print_square(int size)
{
int i = 0
int j;
while (i < size && size > 0)
{
for (j = 0; j < size; j++)
{
_putchar('#');
}
_putchar('\n');
i++;
}
if (i == 0)
_putchar('\n');
}
