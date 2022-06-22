#include "main.h"
/**
* leet - encode  string to 1337
* @str: string input to be encoded
* Return: encoded string
*/
char *leet(char *str)
{
int x = 0, y, z = 5;
char a[5] = {'A', 'E', 'O', 'T', 'L'};
char b[5] = {'4', '3', '0', '7', '1'};
while (str[x])
{
y = 0;
while (y < z)
{
if (str[x] == a[y] || str[x] - 32 == a[y])
str[x] = b[y];
y++;
}
x++;
}
return (str);
}
