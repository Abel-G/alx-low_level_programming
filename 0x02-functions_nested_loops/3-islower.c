#include "main.h"
/**
* _islower - Entry point
* Description: checks whether alphabet is lower case
* @c: the integer value it recieves
* Return:0 if false and 1 if tru
*/
int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
else
{
return (0);
}
}
