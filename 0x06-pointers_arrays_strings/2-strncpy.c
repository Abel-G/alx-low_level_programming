#include "main.h"
/**
* _strncpy - copy a string
* @dest: destination string
* @src: the source string
* @n: number of byte to be copied
* Return: pointer to dest string
*/
char *_strncpy(char *dest, char *src, int n)
{
int x = 0, y = 0;
while (src[x++])
y++;
for (x = 0; src[x] && x < n; x++)
dest[x] = src[x];
for (x = y; x < n; x++)
dest[x] = '\0';
return (dest);
}
