#include "main.h"
#include <stdlib.h>

/**
*str_concat - concatenates two strings
*@s1: first string to be concatenated
*@s2: second string to be concatinated
*Return: concatenated string
*/

char *str_concat(char *s1, char *s2)
{
int a, b, c, d;
char *s;

if (s1 == NULL)
s1 = "";

if (s2 == NULL)
s2 = "";

while (s1[a])
a++;

while (s2[b])
b++;

d = a + b;
s = malloc((sizeof(char) * 1) + 1);
if (s == NULL)
return (NULL);

b = 0;
while (c < d)
{
if (c <= a)
s[c] = s1[c];

if (c >= a)
{
s[c] = s2[b];
b++;
}
c++;
}
s[c] = '\0';
return (s);
}

