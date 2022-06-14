#include <stdio.h>
#include <unistd.h>
/**
* main - Entry point
* Description: prints all combination of 2-digit numbers
* Return: Always 0 (success)
*/
int main(void)
{
int x, y, z, w;
for (x = 48; x <= 57; x++)
{
for (y = 48; y <= 57; y++)
{
for (z = 48; z <= 57; z++)
{
for (w = 48; w <= 57; w++)
{
if (((z + w) > (x + y) &&  z >= x) || x < z)
{
putchar(x);
putchar(y);
putchar(' ');
putchar(z);
putchar(w);
if (x + y + z + w == 227 && x == 57)
{
break;
}
else
{
putchar(',');
putchar(' ');
}
}
}
}
}
}
putchar('\n');
return (0);
}
