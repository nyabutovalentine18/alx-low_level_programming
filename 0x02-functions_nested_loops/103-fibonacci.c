#include <stdio.h>

/**
*main - entry point
*Return: 0
*/

int main(void)
{
int m = 0;
long n = 1, p = 2;
long sum = p;

while (p + n < 4000000)
{
p = +n;
if (p % 2 == 0)
sum += p;
n = p - n;
++m;
}
printf("%ld\n", sum);
return (0);
}

