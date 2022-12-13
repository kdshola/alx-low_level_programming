#include "main.h"

/**
 * print_sign - prints number sign
 * @n: int to check
 * Return: 1 and print + of n is greater than zero
 * 0 and print 0 if n is zero
 * -1 and print - if m is less than 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
