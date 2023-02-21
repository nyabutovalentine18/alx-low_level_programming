#include "main.h"
#include <stdio.h>
/**
*print_to_98 - prints all natural numbers from n to 98
*followed by a new line
*@n: Parameter checked
*Return: 0
*/

void print_to_98(int n)
{
int j;

if (n >= 0 && n <= 98)
{
for (j = n; j <= 98; j++)
{
printf("%d", j);
if (j != 98)
printf(", ");
}
printf("\n");
}
else if (n < 0)
{
for (j = n; j <= 98; j++)
{
printf("%d", j);
if (j != 98)
printf(", ");
}
printf("\n");
}
else if (n > 98)
{
for (j = n; j >= 98; j--)
{
printf("%d", j);
if (j != 98)
printf(", ");
}
printf("\n");
}
else if (n == 98)
printf("%d", n);
}
