#include <stdio.h>
#include <stdlib.h>
/**
* main - Entry point
* Description: Printing single digit using putchar
* Return: Always 0 (success)
*/
int main(void)
{
int i;
for (i = 0; i < 10; i++)
{
putchar(i + '0');
}
putchar('\n');
return (0);
}
