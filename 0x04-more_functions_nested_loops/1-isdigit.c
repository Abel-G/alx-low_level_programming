#include "main.h"
/**
* isdigit - Entry point
* @c: integer received
* Description: check digits
* Return: 1 if c is digit 0 otherwise
*/
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
{
return (1);
}
return (0);
}
