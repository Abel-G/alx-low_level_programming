#include "main.h"
/**
* times_table - Entry point
* Description: print the 9 times table
* Return: void
*/
void times_table(void)  
{
int x, y, z;
int i;  
for (i = 0; i <= 9; i++)    
{      
int j;      
for (j = 0; j <= 9; j++)	
{
x = i*j;
y = x / 10;
z = x % 10;
if (j == 0)
{
_putchar('0');
}
else if (x < 10)
{   
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(z +'0');
}
else
{
_putchar(',');
_putchar(' ');
_putchar(y + '0');
_putchar(x + '0');
}
}
_putchar('\n');    
}
}
