#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - Entry point
* Description: printing alphabets in lowercase
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
return (0);
}
