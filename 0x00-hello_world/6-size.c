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

printf("Size of a char: %lu byte(s)\n", (unsigned long)Sizeof(a));
printf("Size of an int: %lu byte(s)\n", (unsigned long)Sizeof(b));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)Sizeof(c));
printf("Size of long long int: %lu byte(s)\n", (unsigned long)Sizeof(d));
printf("Size of a float: %lu byte(s", (unsigned long)Sizeof(f));
return (0);
}
