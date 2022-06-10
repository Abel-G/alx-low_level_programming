#include "main.h"
/**
* print_numbers - print int 0 -9
* Description: print int numbers
* Return: void
*/
void print_numbers(void)
{
char i = 0;
while (i <= 9)
{
_putchar(i + '0');
i++;
}
_putchar('\n');
}
