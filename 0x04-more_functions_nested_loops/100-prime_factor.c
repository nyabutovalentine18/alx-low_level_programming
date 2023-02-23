#include <stdio.h>
#include<math.h>

/**
*main - entry point
*Return: 0 (Terminated)
*/

int main(void)
{
long a;
long max;
long number = 612852475143;
float square = sqrt(number);

for (a = 1; a <= square; a++)
{
if (number % a == 0)
{
max = number / a;
}
}
printf("%ld\n", max);
return (0);
}
