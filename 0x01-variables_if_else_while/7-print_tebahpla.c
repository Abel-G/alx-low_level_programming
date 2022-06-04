#include <stdio.h>
#include <stdlib.h>
/**
* main - Entry point
* Description: printing alphabets in reverse
* Return: Always 0 (success)
*/
int main(void)
{
int i;
char c;
for (i = 122; i >= 97; i--)
{
c = (char)i;
putchar(c);
}
putchar('\n');
return (0);
}
