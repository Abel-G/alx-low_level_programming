#include "main.h"
/**
* _strpbrk - search for a byte in a string
* @s: the input string
* @accpet: byte to be searched
* Return: byte
*/
char *_strpbrk(char *s, char *accept)
{
int x;
while (*s)
{
for (x = 0; accept[x]; x++)
{
if (*s == accept[x])
{
return (s);
}
s++;
}
return ('\0');
}
