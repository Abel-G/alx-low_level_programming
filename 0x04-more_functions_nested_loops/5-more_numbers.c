#include "main.h"
/**
* more_numbers - print more numbers
* Description: print numbers 0 - 14
* Return: void
*/
void more_numbers(void)
{
int i = 0;
while (i <= 9)
{
int j = 0;
while (j <= 14)
{
_putchar(j + '0');
j++;
}
_putchar('\n');
i++;
}
_putchar('\n');
}
