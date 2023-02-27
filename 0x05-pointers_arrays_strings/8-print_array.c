#include "main.h"
#include <stdio.h>

/**
*print_array - a function that prints n elements of an array of integer
*followed by a new line
*@a: Array of integers
*@n: Number of arrays to be printed
*Return: Nothing
*/

void print_array(int *a, int n)
{
int b;

for (b = 0; b < n; b++)
{
printf("%d", a[b]);
if (b != (n - 1))
{
printf(", ");
}
}
printf("\n");
}
