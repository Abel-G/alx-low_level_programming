#include "main.h"
int find_sqrt(int num, int root);
int _sqrt_recursion( int n);
/**
* find_sqrt - find square root of a number
* @num: input nuber
* @root: root to be tested
* Retrun: the square root or -1
*/
int find_sqrt(int num, int root)
{
if ((root * root) == num)
return (root);
if (root == num / 2)
return (-1);
return (find_sqrt(num, root +1));
}
/**
* _sqrt_recursion - Returns the square root number
* @n: the input number
* Return: square root number or -1
*/
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
if (n == 1)
return (1);
return (find_sqrt(n, root));
}
