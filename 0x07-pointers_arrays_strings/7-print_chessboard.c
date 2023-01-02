#include "main.h"

/**
 * print_chessboard - prints the chessboard in 2d
 * @a: 2d array of chars
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int n = 0, j;

	while (n < 8)
	{
		j = 0;

		while (j < 8)
		{
			_putchar(a[n][j]);
			j++;
		}
		_putchar('\n');
		n++;
	}
}
