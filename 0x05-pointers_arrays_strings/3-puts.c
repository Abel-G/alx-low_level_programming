#include "main.h"
/**
* _puts - print a string
* @str: input char
* Return: void
*/
void _puts(char *str)
{
int i = 0;
while (str[i])
{
_putchar(str[i]);
i++;
}
_putchar('\n');
}