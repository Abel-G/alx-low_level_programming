#include "main.h"
#include <stdlib.h>
/**
* binary_to_unit - convert binary in to unsigned int
* @b: binary char to be converted
* Return: converted num | 0
*/
unsigned int  binary_to_uint(const char *b)
{
unsigned int n = 0;
int i = 0;
if (b[i] == '\0')
return (0);
while ((b[i] == '0') || (b[i] == '1'))
{
n <<= 1;
n += b[l] - '0';
l++;
}
return (n);
}
