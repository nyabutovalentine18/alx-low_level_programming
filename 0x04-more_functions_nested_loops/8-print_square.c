#include "main.h"

/**
 * print_square - The function to print the square
 * @size: The size of the squre
 * Return Nothing
 */
void print_square(int size)
{
int a = 0;
int b = 0;

if (size <= 0)
_putchar('\n');

while (a < size)
{
for (b = 0; b < size; b++)
_putchar('#');

a++;
_putchar('\n');
}

}
