#include <stdio.h>
/**
 * main - prints outsizes of datatypes in C
 * Return: 0 (terminated)
 */

int main(void)
{
char a;
int b;
long int c;
long long int d;
float f;

printf("SIZE of a char: %lu byte(s)\n", (unsigned long)sizeof(a));
printf("SIZE of an int: %lu byte(s)\n", (unsigned long)sizeof(b));
printf("SIZE of a long int: %lu byte(s)\n", (unsigned long)sizeof(c));
printf("SIZE of long long int: %lu byte(s)\n", (unsigned long)sizeof(d));
printf("SIZE of a float: %lu byte(s", (unsigned long)sizeof(f));
return (0);
}
