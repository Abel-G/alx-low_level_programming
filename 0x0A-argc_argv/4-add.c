#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "main.h"
/**
* main - adds positive numbers
* @argc: number of args
* @argv: list of array
* Return: 0
*/
int main(int argc, char *argc[])
{
int x, y, l, s;
char *c;
if (argc < 2)
printf("0\n");
else
{
s = 0;
for (x = 0; x < argc; x++)
{
c = arg[x];
l = strlen(c);
for (y = 0; y < l; y++)
{
if (isdigit(*(c + y)) == 0)
{
printf("Error\n");
return (1);
}
}
s += atoi(argv[x]);
}
printf("%d\n", s);
}
return (0);
}
