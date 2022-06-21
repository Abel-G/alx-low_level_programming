#include "main.h"
/**
* *_strncat - concatenates @src to @dest
* @src: the string to be merged
* @dest: the string to be get appendednt
* @n: number of bytes
* Return: merged string
*/
char *_strncat(char *dest, char *src, int n)
{
int x = 0, y = 0;
while (dest[x++])
y++;
for (x = 0; src[x] && x < n; x++)
dest[y++] = src[x];
return (dest);
}
