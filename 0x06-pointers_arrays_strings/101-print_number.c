#include "main.h"

/**
 * print_number - prints given integer
 * @n: integer to print
 * Return: void
 */

void print_number(int n)
{
	unsigned int b;

	if (n < 0)
	{
		n = -n;
		_putchar('-');
	}
	b = n;
	if (b / 10)
		print_number(b / 10);
	_putchar((b % 10) + '0');
}
