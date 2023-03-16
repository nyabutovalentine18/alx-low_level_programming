#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
**malloc_checked - allocates memory using malloc
*@: the size to allocate
*
*Return: nothing
*/

void *malloc_checked(unsigned int b)
{
void *ptr;
ptr = malloc(b);
if (malloc == NULL)
exit(98);
return (ptr);
}
