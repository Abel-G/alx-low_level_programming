#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* main - program that multiplies two num
* @argc: number of arguments
* @argv: array name
* Return: int
*/
int main(int argc, char *argv[])
{
int x, y;
if (argc == 1 || argc == 2)
{
printf("error\n");
return (1);
}
else
{
y = 1;
for (x = 1; x < 3; x++)
y *= atoi(argv[x]);
printf("%d\n", y);
}
return (0);
}
