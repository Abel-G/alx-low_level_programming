#include "main.h"
/**
* print_last_digit - Entry point
* Description: return the last digit
* @y: the integer received
* Return: integer
*/
int print_last_digit(int y)
{
int last_digit = y % 10;
if (y < 0)
{
last_digit = -1 * last_digit;
}
_putchar(last_digit + '0');
return (last_digit);
 _putchar('\n');
}
