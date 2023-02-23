#include "main.h"

/**
*print_diagonal - draws a diagonal line on the terminal
*@n: The number of times to print the diagonal line
*Return: empty
*/

void print_diagonal(int n)
{
int a;
int b;

if (n <= 0)
{
_putchar('\n');
}
else
{
for (a = 0; a < n; a++)
{
for (b = 0; b < a; b++)
{
_putchar(32);
}
_putchar(92);
_putchar('\n');
}
}
}
