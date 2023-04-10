#include "main.h"

/**
*binary_to_uint -converts a binary number to an unsigned int
*@b: pointer to a string of 0 and 1 chars
*
*Return: the converted number
*/

unsigned int binary_to_uint(const char *b)
{
unsigned int temp = 0;
int k = 0;

if (b != NULL)
{
for (; b[k]; k++)
{
if (b[k] < '0' || b[k] > '1')
{
return (0);
}
temp = 2 * temp + (b[k] - '0');
}
return (temp);
}
else
return (0);
}
