#include <stdio.h>
#include <stdlib.h>
/**
* main - Entry point
* Description: printing small case letters except q and e
* Return: Always 0 (success)
*/
int main(void)
{
int i;
char c;
for (i = 97; i <= 122; i++)
{
c = (char)i;
if (c == 'q' || c == 'e')
{
continue;
}
else
{
putchar(c);
}
}
putchar('\n');
return (0);
}
