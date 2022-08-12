#include "variadic_functions.h"
#include <stdarg.h>
/**
* sum_them_all - sum all parameters and return
* @n: number of parameters
* @...: varaible number of parameters
* Return: 0 or sum
*/
int sum_them_all(const unsigned int n, ...)
{
va_list num;
unsigned int i, s =0;
va_start(num, n);
for(i = 0; i < n; i++)
s += va_arg(num, int);
va_end(num);
return(s);
}
