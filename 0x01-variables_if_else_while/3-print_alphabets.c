#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - Entry - point
* Description: printing in lower and upper case
* Return: Always 0 (success)
*/
int main(void)
{
char c;
int i;
for (i = 97; i <= 122; i++)  
{   
c = (char)i; 
putchar(c);
}
putchar('\n');
char a;
int j; 
for (j = 97; j <= 122; j++)  
{   
a = (char)j;     
putchar(a);
} 
return (0);
} 
