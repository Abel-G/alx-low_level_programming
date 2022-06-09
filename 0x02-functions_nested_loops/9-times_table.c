#include "main.h"
/**
* times_table - Entry point
* Description: print the 9 times table
* Return: void
*/
void times_table(void)  
{
int x;
int i;  
for (i = 0; i <= 9; i++)    
{      
int j;      
for (j = 0; j <= 9; j++)	
{
x = i*j;
_putchar(x + '0');  
}
_putchar('\n');    
}
}
