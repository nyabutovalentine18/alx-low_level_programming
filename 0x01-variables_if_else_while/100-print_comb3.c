#include <stdio.h>

/**
 * main - Start point
 *
 * Return: Always 0
 */
int main(void)
{
	int m;
	int n;

	for (m = 0; m < 10; m++)
	{
		for (n = 0; n < 10; n++)
		{
			if (m < n && m != n)
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
