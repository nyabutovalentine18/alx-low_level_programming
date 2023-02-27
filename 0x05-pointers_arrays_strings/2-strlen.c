#include <stdio.h>

/**
*_strlen - a function that returns the length of a string
*
*@s: The string parameter to get length
*
*Return: The string length
*/

int _strlen(const char *s)
{
size_t length = 0;

while (*s++)
length++;

return (length);
}
