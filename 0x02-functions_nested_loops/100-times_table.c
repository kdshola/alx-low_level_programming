#include "main.h"

/**
 * print_times_table - prints the n times table starting with 0
 * @n: number to ptint
 * Return: void
 */
void print_times_table(int n)
{
	if (n >= 0 && n < 16)
	{
		int x, res, mul;

		for (x = 0;  x <= n; x++)
		{
			_putchar ('0');
			for (mul = 1; mul <= n; mul++)
			{
				res = x * mul;
				_putchar(',');
				_putchar(' ');
				if (res < 10)
					_putchar(' ');
				if (res < 100)
					_putchar(' ');
				if (res > 99)
				{
					_putchar((res / 100) + '0');
					_putchar(((res / 10) % 10) + '0');
				}
				else if (res > 9 && res < 100)
				{
					_putchar((res / 10) + '0');
				}
				_putchar((res % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
