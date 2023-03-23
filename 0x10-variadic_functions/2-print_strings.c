#include "variadic_functions.h"

/**
*print_strings - prints strings, followed by a new line
*@separator: string to be printed between the strings
*@n: number of strings passed to the function
*
*Return: void
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
va_list strings;
unsigned int j;
char *ptr;

va_start (strings, n);

for (j = 0; j < n; j++)
{
ptr = va_arg(strings, char *);

if (ptr)
printf("%s", ptr);
else
printf("(nil)");
if (j < n - 1)
if (separator)
printf("%s", separator);
}
va_end(strings);
printf("\n");
}
