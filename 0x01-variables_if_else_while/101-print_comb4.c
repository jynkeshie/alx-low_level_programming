#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits
 * Return: Always 0 (Success)
 */
int main(void)
{
	int b, d, f;

	for (b = 0; b <= 7; b++)
	{
		for (d = b + 1; d <= 8; d++)
		{
			for (f = d + 1; f <= 9; f++)
				{
					putchar(b + '0');
					putchar(d + '0');
					putchar(f + '0');
					if (b != 7 || d != 8)
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
