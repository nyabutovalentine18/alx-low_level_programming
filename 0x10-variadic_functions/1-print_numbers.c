#include "variadic_functions.h"

/**
*print_numbers - prints numbers, followed by a new line
*@separator: string to be printed between numbers
*@n: number of integers passed to the function
*
*Return: void
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list printnumbers;
unsigned int j;
va_start(printnumbers, n);
for (j = 0; j < n; j++)
{
printf("%d", va_arg(printnumbers, int));

if (separator != NULL && j != (n - 1))
{
printf("%s", separator);
}
}
va_end(printnumbers);
printf("\n");
}

