#include "main.h"

/**
 * print_triangle - print diagonals
 * @size: size of triangle
 * Return: void
 */
void print_triangle(int size)
{
	int row, hash, spc;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (row = 1; row <= size; row++)
		{
			for (spc = size - row; spc >= 1; space--)
			{
				_putchar(' ');
			}
			for (hash = 1; hash <= row; hash++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}


