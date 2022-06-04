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
char c, a;
int i, j;
for (i = 97; i <= 122; i++)
{
c = (char)i;
putchar(c);
}
for (j = 65; j <= 90; j++)
{
a = (char)j;
putchar(a);
}
putchar('\n');
return (0);
}
