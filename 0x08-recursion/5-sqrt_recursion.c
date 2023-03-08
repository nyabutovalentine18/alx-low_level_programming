#include "main.h"

/**
*_sqrt_recursion - returns the natural square root of a number
*@n: natural square root
*@m:an iterator
*Return: integer
*/

int is_sqrt_recursion(int n, int m)
{
int sqrt = m * m;
if (sqrt > n)
return (-1);
if (sqrt == n)
return (m);
return (is_sqrt_recursion(n, m + 1));
}
/**
 * _sqrt_recursion - returns square root
 * @n: input size
 * Return: returns the natural square root of a number
 */

int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
return (is_sqrt_recursion(n, 1));
}
