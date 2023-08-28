#include "main.h"

/**
 * print_chessboard - a function that prints chessboard
 *
 * @a: array of array
 * Return: empty
 */
void print_chessboard(char (*a)[8])
{
	int b, r;

	for (b = 0; b < 8; b++)
	{
		for (r = 0; r < 8; r++)
		{
			_putchar(a[b][r]);
		}
		_putchar('\n');
	}
}
