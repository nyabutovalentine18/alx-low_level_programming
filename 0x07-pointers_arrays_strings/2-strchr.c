#include "main.h"

/**
**_strchr - a function that locates a character in a string
*@s: Parameter input
*@c: Character input
*Return: 0
*/

char *_strchr(char *s, char c)
{
int a = 0;
for (a = 0; s[a] >= '\0'; a++)
{
if (s[a] == c)
return (s + 1);
}
return (NULL);
}
