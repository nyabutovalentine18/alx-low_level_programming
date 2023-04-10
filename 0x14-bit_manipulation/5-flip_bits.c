#include "main.h"


/**
* flip_bits -
* returns the number of bits you would need
*to flip to get from one number to another.
* @n: first element
* @m: second element
*
* Return: the number of bits flipped
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int result = n ^ m;
unsigned int res = 0;

while (result != 0)
{
res++;
result &= (result - 1);
}
return (res);
}
