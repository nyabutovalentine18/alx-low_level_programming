#include "main.h"

/**
*print_most_numbers - prints the numbers, from 0 to 9
*followed by a new line
*Return: The numbers since 0 to 9
*/

void print_most_numbers(void)
{
int a = 0;

for (a = 0; a <= 9; a++)
{
if (a == 2 || a == 4)
{
continue;
}
else
{
_putchar(a + '0');
}
}
_putchar('\n');
}
