#include <stdio.h>
/**
 * main - prints outsizes of datatypes in C
 * Return: 0 (terminated)
 */

int main(void)
{
char t;
int u;
long int v;
long long int w;
float f;

printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(t));
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(u));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(v));
printf("Size of long long int: %lu byte(s)\n", (unsigned long)sizeof(w));
printf("Size of a float: %lu byte(s", (unsigned long)sizeof(f));
return (0);
}
