#include <stdio.h>
#include <stdlib.h>
/**
* main - Entry point
* Description: printing two digit combo
* Return: Always 0 (success)
*/
int main(void)
{
int i, j;
for (i = 0; i < 9; i++)
{
for (j = 1; j <= 9; j++)
{
if ( j >= i)
{
continue;
}
putchar(i + '0');
putchar(j + '0');
if (i == 9)
{
continue;
}
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
