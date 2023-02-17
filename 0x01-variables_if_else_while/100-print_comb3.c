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

	for (m = 0; m < 10; m++)
	{

	for (n = 1; n < 10; n++)
	{
	if (m < n &&  m != n)
	{
	putchar(m + '0');
	putchar(n + '0');
	putchar(',');
	putchar(' ');
	}
	}
	}
	putchar('\n');
	return (0);
}

