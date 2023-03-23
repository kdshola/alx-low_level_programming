#include "main.h"

/**
 * print_square - prints square followed by a new line
 * @size: square size
 * Return: void
 */
void print_square(int size)
{
	int i, j;

	if (size < 1)
	{
		_putchar('\n');
	}
	else
	{
		for (j = 0; j < size; j++)
		{
			for (i = 0; i < size; i++)
				_putchar('#');
			_putchar('\n');
		}
	}
}
