#include "main.h"

/**
 * print_binary - converts and ptints a number in base 2
 * @n: number to convert
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	unsigned int shift;
	int i;

	for (i = 31; i >= 0; i--)
	{
		shift = n >> i;
		if (shift & 1)
			_putchar('1');
		else
			_putchar('0');
	}
}
