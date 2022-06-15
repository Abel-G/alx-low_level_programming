#include "main.h"
/**
* put_half - print second half of a string
* @str: string
* Return: void
*/
void puts_half(char *str)
{
int x;
for (x = 0; str[x]; != '\0'; x++)
x++;
for (x /= 2; str[x] != '\0'; x++)
{
_putchar(str[x]);
}
_putchar('\n');
}
