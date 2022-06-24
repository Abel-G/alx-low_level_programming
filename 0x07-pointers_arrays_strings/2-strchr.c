#include "main.h"
/**
* _strchr - locat a character in a string
* @s: input character
* @c: character to be located
* Return: character
*/
char *_strchr(char *s, char c)
{
int x;
for (x = 0; s[x] >= '\0'; x++)
{
if (s[x] == c)
return (s + x);
}
return ('\0');
}
