#include "main.h"
/**
* rev_string - prints reverse string
* @s: string pointer
* Return: 0
*/
void rev_string(char *s)
{
int x, y, z;
char c;
for (x = 0; s[x] != '\0'; x++)
y = 0;
z = x / 2;
while (z--)
{
c = s[x - y - 1];
s[x - y - 1] = s[y];
s[y] = c;
y++;
}
}
