#include "main.h"
/**
* print_sign - Entry point
* Description: check number's sign
* @n: is the integer it recieves
* Return: 1 if n > 0 , 0 if n = 0 & -1 if below zero
*/
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
