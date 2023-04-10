#include "main.h"

/**
* clear_bit -  sets the value of a bit to 0 at a given index.
*@n: the inter containing bits
* @index: index
*
* Return: integer
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned long int k;

if (index >= sizeof(unsigned long int) * 8)
{
return (-1);
}

k = ~(1UL << index);

*n &= k;
return (1);
}

