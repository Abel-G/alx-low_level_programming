#include "main.h"
/**
* times_table - Entry point
* Description: print the 9 times table
* Return: void
*/
void times_table(void)  
{
int x, y, z, i, j;  
for (x = 0; x <= 9; x++)    
{            
for (y = 0; y <= 9; y++)	
{
z = x * y;
i = z / 10;
j = z % 10;
if (y == 0)
{
_putchar('0');
}
else if (z < 10)
{   
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(j + '0');
}
else
{
_putchar(',');
_putchar(' ');
_putchar(i + '0');
_putchar(j + '0');
}
}
_putchar('\n');    
}
}
