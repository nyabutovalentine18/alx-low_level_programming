#include "main.h"

/**
*rev_string - a function that reverses a string
*@s: The parameter string
*
*Return: nothing
*/

void rev_string(char *s)
{
int a = 0;
int i = 0;
char c;

while (s[i++])
a++;

for (i = a - 1; i >= a / 2; i--)
{
c = s[i];
s[i] = s[a - i - 1];
s[a - i - 1] = c;
}
}
