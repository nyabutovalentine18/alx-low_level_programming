#include "main.h"

/**
*reverse_array - reverses the content of an array of integers
*@a: The array to be reversed
*@n: number of elements in array
*Return: rev
*/

void reverse_array(int *a, int n)
{
int tmp;
int i;

for (i = n - 1; i >= n / 2; i--)
{
tmp = a[n - 1 - i];
a[n - 1 - i] = a[i];
a[i] = tmp;
}
}
