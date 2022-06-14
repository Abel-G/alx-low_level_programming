#include <stdio.h>
/**
* main - fizz buzz
* Return: void
*/
int main(void)
{
int n = 100, i;
for (i = 1; i <= 100; i++)
{
if (i % 3 == 0)
{
printf("Fizz");
printf(' ');
}
else if (i % 5 == 0)
{
printf("Buzz");
printf(' ');
}
else if ((i % 3 == 0) && (i % 5 == 0))
{
printf("FizzBuzz");
printf(' ');
}
else
{
printf(i);
printf(' ');
}
}
}
