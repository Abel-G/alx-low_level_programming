#include <stdio.h>
/**
* main - Entry point
* Description: print sum of natural numbers
* Return: Always 0 (success)
*/
int main(void)
{
int x = 0, i;
while (i < 1024)
{
if ((i % 3 == 0) || (i % 5 == 0))
{
x += i;
}
i++;
}
printf("%d\n", x);
return (0);
}
