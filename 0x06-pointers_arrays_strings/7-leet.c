#include "main.h"
/**
**leet - encodes a string into 1337
*@n: Input
*Return: value of n
*/

char *leet(char *n)
{
int g;
int h;
char s1[] = "aAeEoOtTlL";
char s2[] = "4433007711";

for (g = 0; n[g] != '\0'; g++)
{
for (h = 0; h < 10; h++)
{
if (n[g] == s1[h])
{
n[g] = s2[h];
}
}
}
return (n);
}
