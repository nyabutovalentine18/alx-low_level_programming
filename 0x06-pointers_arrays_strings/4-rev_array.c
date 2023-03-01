#include "main.h"

/**
*reverse_array - reverses the content of an array of integers
*@a: array a
*@n: number of array elements
*Return: rev
*/

void reverse_array(int *a, int n)
{
int c;
int b;
int d;
int *p;
p = a;

for (c = 0; c < n; c++)
{
p++
}
for (b = 0; b < n / 2; b++)
{
d = a[b];
a[b] = *p;
*p = d;
p--
}
}
