#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - prints all the numbers of base 16 in lowercase
 * followed by new line
 *Return: Always (Success)
 */

int main(void)
{
	int m;
	char low;

	for (m = '0'; m <= '9'; m++)
	putchar(m);

	for (low = 'a'; low <= 'f'; low++)
	putchar(low);
	putchar('\n');
	return (0);
}
