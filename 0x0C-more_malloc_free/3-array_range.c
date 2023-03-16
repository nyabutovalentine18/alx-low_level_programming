#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
**array_range - creates an array of integers
*@max: ...
*@min: ..
*Return: integer
*/

int *array_range(int min, int max)
{
int i = 0;
int *ptr;
if (min > max)
return (NULL);

ptr = malloc((sizeof(int) * (max - min)) + sizeof(int));
if (ptr == NULL)
return (NULL);
while (min <= max)
{
ptr[i] = min;
i++;
min++;
}
return (ptr);
}
