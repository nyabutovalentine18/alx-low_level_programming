#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - prints all possible different combinations of two digits
 * Return: Always (Success)
 */

int main(void)
{
	int m, n;

	for (m = '0'; m < '9'; m++)
	{

	for (n = m + 1; m <= '9'; m++)
	{
	if (n != m)
	{
	putchar(m);
	putchar(n);
	if (m == '8' && n == '9')
	continue;
	putchar(',');
	putchar(' ');
	}
	}
	}
	putchar('\n');
	return (0);
}

