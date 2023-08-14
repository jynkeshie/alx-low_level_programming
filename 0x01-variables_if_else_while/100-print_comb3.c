#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, m;

	for (n = 1; n <= 8; n++)
	{
		for (n = 2; n <= 7; m++)
		{
			if (m > n)
			{
				putchar(n);
				putchar(m);
				if (n != 8 || m != 7)
				{
					putchar(',');
					putchar(' ');
				}

			}
		}
	}
	putchar('\n');
	return (0);
}
