#include "main.h"

/**
* _isupper - Check uppercase
* @c: the character to be checked
* Return: 1 if c is uppercase , 0 otherwise
*/

int _isupper(int c)
{
if (c >= 65 && c <= 98)
{
return (1);
}
return (0);
}
