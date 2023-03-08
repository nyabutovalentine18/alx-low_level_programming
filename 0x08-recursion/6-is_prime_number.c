#include "main.h"

/**
*is_prime - checks for prime number
*@n: number to be checked
*@m: number to be checked
*Return: integer
*/

int is_prime(unsigned int n, unsigned int m)
{
if (n % m == 0)
{
if (n == m)
return (1);
else
return (0);
}
return (0 + is_prime(n, m + 1));
}

/**
* is_prime_number - printing prime numbers
* @n: input integer value
* Return: integer
*/

int is_prime_number(int n)
{
if (n == 0)
return (0);
if (n < 0)
return (0);
if (n == 1)
return (0);
return (is_prime(n, 2));
}
