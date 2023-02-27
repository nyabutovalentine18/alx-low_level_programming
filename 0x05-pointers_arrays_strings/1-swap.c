#include <stdio.h>

/**
*swap_int - swaps the values of two integers
*@a: The first parameter to be swapped
*@b: The second parameter to be swapped
*
*Return: nothing
*/

void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}
