#include "main.h"

int the_prime(int n, int m);
/**
*is_prime_number - checks for prime number
*@n: number to be checked
*Return: integer
*/

int is_prime_number(int n);
{
return (the_prime(n, 1));
}
/**
*the_prime - checks the prime numbers
*@n: number
*@m: iterator
*return a 1 or 0
*/

int the_prime(int n, int m)
{
if (n <= 1)
return (0);

if (n % m == 0 && m > 1)
return (0);

if ((n / m) < m)
return (1);
return (is_prime_number(n, m + 1));
}
