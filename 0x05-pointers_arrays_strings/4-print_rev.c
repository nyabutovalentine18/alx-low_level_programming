#include <stdio.h>

/**
*print_rev - prints a string
*followed by a new line
*@s: Parameter string to be checked
*Return: void
*/

void print_rev(char *s)
{
int a = 0;
while (s[a] != '\0')
{
a++;
}
for (a -= 1; a >= 0; a--)
{
_putchar(s[a]);
}
_putchar('\n');
}
