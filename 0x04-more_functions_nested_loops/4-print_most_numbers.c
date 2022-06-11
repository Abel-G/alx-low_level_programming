#include "main.h"
/**
* print_most_numbers - print 0 - 9 except 2 and 4
* Return: void
* Description: prints
*/
void print_most_numbers(void)
{
int i = 0;
while (i <= 9)
{
if ( i == 2 || i == 9)
{
continue;
}
else
{
_putchar(i + '0');
}
}
_putchar('\n');
}
