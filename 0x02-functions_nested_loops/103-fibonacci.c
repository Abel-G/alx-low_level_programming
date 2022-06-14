#include <stdio.h>
/**
* main - main entry
* Description; calculate fibonacci
* Return: 0
*/
int main(void)
{
int x = 0;
int y = 1;
int z = 0;
int i = 0;
while (z < 4000000)
{
z = x + y;
x = y;
y = z;
if (z % 2 == 0)
i += z;
}
printf("%i\n", i);
return (0);
} 
