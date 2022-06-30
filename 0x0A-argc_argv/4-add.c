#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* main - adds positive numbers
* @argc: number of args
* @argv: list of array
* Return: 0
*/
int main(int argc, char *argv[])
{
if (argc == 1)
printf("0\n");
int x, y, l, s = 0, z;
for (x = 0; x < argc; x++)
{
for (y = 0; argv[x][y] != 0; y++)
{
if (argv[x][y] > '9' || argv[x][y] < '0')
{
printf("%s\n", "Error");
return (1);
}
}
}
for (z = 0; z < argc; z++)
{
l = atoi(argv[z]);
s += l;
}
printf("%d\n", s);
return (0);
}
