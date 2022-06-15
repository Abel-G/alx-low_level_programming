#include "main.h"
/**
* _strlen - check the length of string
* @s: the string
* Return: length of the string
*/
int _strlen(char *s)
{
int l = 0;
while (s[l])
{
l++;
}
return (l);
}
