#include "main.h"
/**
* print_rev - print reverse string
* @s: string pointer
* Return: void
*/
void print_rev(char *s)
{
int i = 0;
while (s[i])
i++;
while (i--)
_putchar(s[i]);
_putchar('\n');
}
