#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - prints all possible combinations of single-digit numbers
 * followed by a space
 * prints in ascending order
 * Return: Always (Sucess)
 */

int main(void)
{
	int m;

	for (m = '0'; m <= '9'; m++)
	{
	putchar(m);
	if (m != '9')
	{
	putchar(',');
	putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}
