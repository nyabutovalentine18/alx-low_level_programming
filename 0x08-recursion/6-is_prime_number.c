#include "main.h"

/**
*is_prime_number - checks for prime number
*@n: number to be checked
*@m: iteration
*Return: integer
*/

int is_prime_number(int n, int m)
{
if (n <= 1)
return (0);

if (n % m == 0 && m > 1)
return (0);

if ((n / m) < m)
return (1);
return (is_prime_number(n, m + 1));
}
