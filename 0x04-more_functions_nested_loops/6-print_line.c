#include "main.h"

/**
 * print_line - Draws a straight line according to parameter
 * @n: The number of lines to draw
 * Return: empty
 */
void print_line(int n)
{
	int b;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (b = 0; b < n; b++)
		{
			_putchar(95);
		}
		_putchar('\n');
	}
}
