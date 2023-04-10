#include "main.h"

/**
* clear_bit - Sets value of a bit at index
* @n: The integer to be set
* @index: The index, starting from 0 of bit you set
*
* Return: 1 if successful otherwise -1 if error
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index > sizeof(unsigned long int) * 8)
return (-1);

*n &= ~(1 << index);

return (1);
}
