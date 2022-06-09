#include "main.h"
/**
* print_sign - Entry point
* Description: check number's sign
* @n: is the integer it recieves
* Return: 1 if greater than n is greater than 1, 0 if equals to 0 and -1 if below zero
*/
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
_putchar(',');
return (1);
}
else if (n == 0)
{
_putchar('0');
_putchar(',');
return (0);
}
else
{
_putchar('-');
_putchar(',');
return (-1);
}
}
