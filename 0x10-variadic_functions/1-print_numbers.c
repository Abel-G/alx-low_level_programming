#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
* print_numbers - print no.
* @separator: string for print
* @n: number of parameters
* @...: size of the number to be printed
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list num;
unsigned int i;
va_start(num, n);
for (i = 0; i < n; i++)
{
printf("%d", va_arg(num, int));
if (i != (n - 1) && separator != NULL)
printf("%s", separator);
}
printf("\n");
va_end(num);
}
