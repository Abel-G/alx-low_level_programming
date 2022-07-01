#include "main.h"
#include <stdlib.h>
/**
* _strdup -  returns a pointer to a newly allocated space in memory
* @str: string to be copied
* Return: null or string
*/
char *_strdup(char *str)
{
int x = 1, y = 0;
char *c;
if (str == NULL)
return (NULL);
while (str[x])
x++;
c = (char *)malloc(x * sizeof(char) + 1);
if (c == NULL)
return (NULL);
while (y < x)
{
c[y] = str[y];
y++;
}
c[y] = '\0';
return (c);
}  
