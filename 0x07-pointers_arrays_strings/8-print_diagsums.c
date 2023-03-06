#include "main.h"
#include <stdio.h>

/**
*print_diagsums - sum of two diagonals of a square matrix of integers
*@a: input
*@size: input
*Return: 0
*/

void print_diagsums(int *a, int size)
{
int d;
int sum1 = 0;
int sum2 = 0;
for (d = 0; d < size; d++)
{
sum1 = sum1 + a[d * size + d];
}
for (d = size - 1; d >= 0; d--)
{
sum2 += a[d * size + (size - d - 1)];
}
printf("%d, %d\n", sum1, sum2);
}
