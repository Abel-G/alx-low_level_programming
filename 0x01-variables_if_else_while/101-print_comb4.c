#include <stdio.h>
/**
* main - print combination of 3 numbers
* Return: Always (success)
*/
int main(void)
{
int x, y, z;
for (x = '0'; x <= '9'; x++)
{
for (y ='0'; y <= '9'; y++)
{
for (z = '0'; z <= '9'; z++)
{
if (x < y && y < z)
{
putchar(x);
putchar(y);
putchar(z);
if (c != '7')
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}
