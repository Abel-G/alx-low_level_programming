#include "main.h"
/**
* _isalpha - Entry point
* Description: checks whether c is alphabet
* @c: the integer it receives
* Return: 1 if true or 0 if false
*/
int _isalpha(int c)
{
if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
{
return (1);
}
return (0);
}
