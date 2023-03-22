#include "function_pointers.h"
#include <stdlib.h>
/**
*int_index - searches for an integer
*@array: array
*@cmp: pointer to the function to be used for comparison
*@size: number of elements in array
*
*Return: integer
*/

int int_index(int *array, int size, int (*cmp)(int))
{
unsigned int i;
if (array == NULL || size <= 0 || cmp == NULL)
return (-1);
for (i = 0; i < size; i++)
{
if (cmp(array[i]))
return (i);
}
return (-1);
}
