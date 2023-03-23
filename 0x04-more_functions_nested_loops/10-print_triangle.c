#include "main.h"

/**
 * print_triangle - prints triangle using #
 * @size: triangle size
 * Return: void
 */
void print_triangle(int size)
{
	int line, prnt, space;

	if (size < 1)
	{
		_putchar('\n');
	}
	else
	{
		for (line = 0; line < size; line++)
		{
			for (space = line; space < size - 1; space++)
				_putchar(' ');
			for (prnt = 0; prnt <= line; prnt++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
