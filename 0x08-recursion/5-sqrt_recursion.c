#include "main.h"
int find_sqrt(int x, int y);
int _sqrt_recursion( int n);
/**
* find_sqrt - find square root of a number
* @num: input nuber
* @root: root to be tested
* Retrun: the square root or -1
*/
int find_sqrt(int x, int y)
{
if ((y * y) == x)
return (y);
if (y == x / 2)
return (-1);
return (find_sqrt(x, y +1));
}
/**
* _sqrt_recursion - Returns the square root number
* @n: the input number
* Return: square root number or -1
*/
int _sqrt_recursion(int n)
{
int y = 0;
if (n < 0)
return (-1);
if (n == 1)
return (1);
return (find_sqrt(n, y));
}
