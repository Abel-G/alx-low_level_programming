#include "main.h"
#include <stdlib.h>
/**
* string_nconcat - concatinate strings based on inserted bytes
* @s1: string 1
* @s2: string 2
* @n: maximum size of s2
* Return: null or a pointer to concatinated result
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *con;
unsigned int l n;
unsigned int i;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
for (i = 0; s1[i]; i++)
l++;
con = malloc(sizeof(char) * (l +1));
if (con == NULL)
return (NULL);
l = 0;
for (i = 0; s1[i]; i++)
con[l] = s1[i];
for (i = 0; s2[i] && i < n; i++)
con[l] = s2[i];
con[l] = '\0';
return (con);
}
