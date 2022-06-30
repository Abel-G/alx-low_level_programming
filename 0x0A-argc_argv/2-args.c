#include <stdio.h>
#include "main.h"
/**
* main - print argument passed
* @argc: number of arguments
* @argv: array name
* Return: 0
*/
int main(int argc, char *argv[])
{
int x;
for (x = 0; x < argc; x++)
printf("%s\n", argv[x]);
return (0);
}
