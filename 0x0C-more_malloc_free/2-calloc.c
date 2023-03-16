#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
**_calloc - allocates memory for an array, using malloc
*@size: size of memory to be allocated
*@nmemb: ..
*Return: nothing
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
int i = 0, m = 0;
char *ptr;
if (nmemb == 0 || size == 0)
return (NULL);

m = nmemb * size;
ptr = malloc(m);
if (ptr == NULL)
return (NULL);

while (i < m)
{
ptr[i] = 0;
i++;
}
return (ptr);
}
