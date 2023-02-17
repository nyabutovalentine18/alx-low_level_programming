#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10 starting from o
 * followed by new line
 * Return: Always (Success)
 */

int main(void)
{
	int a;

	for (a = '0'; a <= '9'; a++)
	putchar(a);
	putchar('\n');
	return (0);
}
