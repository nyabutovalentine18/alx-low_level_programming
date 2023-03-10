#include "main.h"

/**
* _strlen_recursion - function that returns the length of a string
*
* @s: string to receive
*
* Return: int
*/


int _strlen_recursion(char *s)
{
if (*s == '\0')
return (0);
s++;
return (1 + _strlen_recursion(s));
}

/**
*comparing- compares strings
*@a: first iterative
*@b: secod iterative
*Return: 0
*/
int comparing(char *s, int a, int b)
{
if (*(s + a) == *(s + b))
{
if (a == b || a == b + 1)
return (1);
return (0 + comparing(s, a + 1, b - 1));
}
return (0);
}

/**
*is_palindrome - return 1 if a function is a string and 0 otherwise
*@s: input value
*Return: 0
*/

int is_palindrome(char*s)
{
if (*s == '\0')
return (1);
return (comparing(s, 0, _strlen_recursion(s) - 1));
}
