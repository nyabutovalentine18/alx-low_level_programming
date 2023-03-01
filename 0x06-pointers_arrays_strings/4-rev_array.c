#include <stdio.h>

/**
*reverse_array - reverses the content of an array of integers
*@a: Array checked
*@n: number of array elements
*Return: reverse
*/

void reverse_array(int *a, int n);
{
int c;
int b;

for (c = 0; c < n; c++)
{

n--;
b = a[c];
a[c] = a[n];
a[n] = b;
}
}
