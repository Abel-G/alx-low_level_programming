#include "main.h"
/**
* leet - encode  string to 1337
* @str: string input to be encoded
* Return: encoded string
*/
char *leet(char *str)
{
int x = 0, y = 0, z = 5;
char a[5] = {'a', 'e', 'o', 't', 'l'};
char b[5] = {'4', '3', '0', '7', '1'};
while (str[x])
{
while (y < z)
{
if (str[x] == a[y] || str[x] + 32 == a[y])
str[x] = b[y];
y++;
}
x++;
}
return (str);
}
