#include "main.h"
/**
* factorial - calculate factorial of a given number
* @n: the given number
* Return: int
*/
int factorial(int n)
{
int x = n;
if (n < 0)
return (-1);
else if (n >= 0 && n <= 1)
return (1);
else
x *= factorial(n - 1);
return (x);
}
