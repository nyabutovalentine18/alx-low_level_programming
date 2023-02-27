#include <stdio.h>

/**
*puts_half - a function that prints half of a string
*followed by a new line
*@str: String to be checked
*Return: Nothing
*/

void puts_half(char *str)
{
int a;
int b;
a = 0;

while (str[a] != '\0')
{
a++;
}
if (a % 2 == 1)
{
b = (a - 1) / 2;
b += 1;
}
else
{
b = a / 2;
}
for (; b < a; b++)
{
putchar(str[b]);
}
putchar('\n');
}
