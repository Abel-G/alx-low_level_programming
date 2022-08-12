#include "variadic_functions.h"
#include <stdio.h>
#include <stdagr.h>
/**
* print_strings - print string
* @separator: string to be printed between numbers
* @n: number of string to be passed
* @...: size of strings to printed
* Description: if separator is NUL will not be printed
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list strs;
char *s;
unsigned int i;
va_start(strs, n);
for (i = 0; i < n; i++)
{
s = va_arg(strs, char *);
if (s == NULL)
printf("(nil)");
else
printf("%s", s);
if (i < n - 1 && separator)
printf("%s", separator);
}
va_end(strs);
printf("\n");
}
