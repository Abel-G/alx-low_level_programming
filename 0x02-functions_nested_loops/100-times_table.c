#include "main.h"
/**
* print_times_table -  Entry point
* n: integer recieved
* Description: printsthe n times table
* Return: void
*/
void print_times_table(int n)
{
int i, j, x;
if ( n >= 0 && n < 15)
{
for (i = 0; i <= n; i++)
{
for (j = 0; j < n; j++)
{
x = i * j;
if (x > 99)
{
_putchar(',');
_putchar(32);
_putchar((x / 100) + '0');
_putchar(((x / 10) % 10) +'0');
_putchar((x % 10) + '0');
}
else if (x > 9)
{
_putchar(',');
_putchar(32);
_putchar(32);
_putchar(((x / 10) % 10) + '0');
_putchar((x % 10) + '0');
}
else
{
if (j != 0)
{
_putchar(',');
_putchar(32);
_putchar(32);
_putchar(32);
}
_putchar(x +'0');
}
}
_putchar('\n');
}
}
}

