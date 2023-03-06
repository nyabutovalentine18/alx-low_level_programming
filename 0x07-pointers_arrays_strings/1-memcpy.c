#include "main.h"

/**
**_memcpy - a function that copies memory area.
*@dest: Destination
*@src: Source
*@n: Number of integers
*Return: dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
int a;
int b;

a = 0;
while (dest[a] != '\0')
{
a++;
}
b = 0;
while (src[b] != '\0')
{
dest[a] = src[b];
a++;
b++;
}
dest[a] = '\0';
return (dest);
}

