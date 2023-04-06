#include "main.h"

/**
*get_bit - returns the value of a bit at a given index
*@index: index to check
*@n: integer
*Return: the value of the bit at index index or -1 if an error occured
*/

int get_bit(unsigned long int n, unsigned int index)
{
unsigned int j;
if (index > 64)
return (-1);

j = n >> index;

return (j & 1);
}
