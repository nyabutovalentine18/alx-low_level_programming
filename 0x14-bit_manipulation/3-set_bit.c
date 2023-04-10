#include "main.h"

/**
* set_bit - set 1 at a given position index
* @index: index, starting from 0 of the bit you want to set
* @n: integer to be set
*
* Return: 1 if worked otherwise -1 for ay error
*/
int set_bit(unsigned long int *n, unsigned int index)
{
if (index > sizeof(unsigned long int) * 8)
return (-1);

*n |= (1 << index);
return (1);
}


