#include "main.h"
/**
* _strspn - get length of a prefix substring
* @s: char pointer
* @accept: another pointer to character
* Return: s
*/
unsigned int _strspn(char *s, char *accept)
{
unsigned int bytes = 0;
int x;
while (*s)
{
for  (x = 0; accept[x]; x++)
{
if (*s == accept[x])
{
bytes++;
break;
}
else if (accept[x + 1] == '\0')
return (bytes);
}
s++;
}
return (bytes);
}
