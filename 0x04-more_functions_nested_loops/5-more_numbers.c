#include "main.h"
/**
* more_numbers -  print numbers 0 - 14
* Return: void
*/
void more_numbers(void)
{
char x, y;
int i = 0;
while (i < 10)
{
for (x = 0; x <= 14; x++)
{
x = y;
if (x > 9)
{
_putchar('1');
y = x % 10;
}
_putchar('0' + c);
}
_putchar('\n');
i++;
}
}
