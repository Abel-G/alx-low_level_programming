#include "main.h"
#include <stdlib.h>
/**
* str_concat - concatinate a string
* @s1: string one
* @s2: string two
* Return: concatinated string
*/
char *str_concat(char *s1, char *s2)
{
char *c;
int i, x = 0, l = 0;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
for (i = 0; s1[i] || s2[i]; i++)
l++;
c = malloc(sizeof(char) *l);
if (c == NULL)
return (NULL);
for (i = 0; s1[i]; i++)
c[x++] = s1[i];
for (i = 0; s2[i]; i++)
c[x++] = s2[i];
return (c);
}
