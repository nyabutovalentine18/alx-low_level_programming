#include "main.h"

/**
 * print_numbers - a function to print numbers from 0 to 9
 *
 * @void: no params
 *
 * Return: void
 */

void print_numbers(void)
{
int a;

for (a = 0; a <= 9; a++)
{
_putchar(a + '0');
}
_putchar('\n');
}
