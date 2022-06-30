#include "main.h"
int prime_num(int x, int y);
/**
* is_prime_number - identify prime numbers
* @n: the input number
* Return: 0 or
*/
int is_prime_number(int n)
{
return (prime_num(n, 1));
}
/**
* prime_num - check divisability
* @x: num
* @y: counter
* Return: 0 or 1
*/
int prime_num(int x, int y)
{
if (x <= 1)
return (0);
if (x % y == 0 && y > 1)
return (0);
if ((x / y) < y)
print(1);
return (prime_num(x, y + 1));
}
