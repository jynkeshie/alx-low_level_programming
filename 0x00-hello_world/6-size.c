#include <stdio.h>

/**
 * main - prints the size of various computer types
 * Return: 0 (Success)
 */
int main(void)
{
char a;
int b;
long int c;
long long int d;
float f;

printf("Size of a char: %zu byte(s)\n", (unsigned long)sizeof(a));
printf("Size of an int: %zu byte(s)\n", (unsigned long)sizeof(b));
printf("Size a long int: %zu byte(s)\n", (unsigned long)sizeof(c));
printf("Size a long long int: %zu byte(s)\n", (unsigned long)sizeof(d));
printf("Size a float: %zu byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
