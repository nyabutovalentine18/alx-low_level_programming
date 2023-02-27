#include <stdio.h>

/**
*puts2 - prints every other character of a string
*starting with the first character
*@str: The string to be checked
*followed by a new line
*Return: Nothing
*/

void puts2(char *str)
{
int a;
int b;
b = 0;

while (str[b] != '\0')
{
b++;
}

for (a = 0; a < b; a += 2)
{
putchar(str[a]);
}
putchar('\n');
}
