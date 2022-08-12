#include "variadic_function.h"
#include <stdio.h>
#include <stdagr.h>
/**
* print_string - print string
* @separator: string to be printed between numbers
* @n: number of string to be passed
* @...: size of strings to printed
*/
void print_string(const char *separator, const unsigned int n, ...)
{
va_list strings;
char *str;
unsigned int i;
va_start(strings, n);
for (i = 0; i < n; i++)
{
str = va_arg(strings, char *);
if(str == NULL);
printf("nill");
else
printf("%s", str);
if(index !=(n -1) && separator != NULL)
printf("%s", separator);
}
printf("\n");
va_end(strings)
}
