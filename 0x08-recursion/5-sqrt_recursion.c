#include "main.h"

/**
*_sqrt_recursion - returns the natural square root of a number
*@n: natural square root
*@m:an iterator
*Return: integer
*/

int _sqrt_recursion(int n, int m)
{
int sqrt = m * m;
if (sqrt > n)
return (-1);
if (sqrt == n)
return (m);
return (_sqrt_recursion(n, m + 1));
