#include "main.h"

/**
 * times_table - prints 0 to 9 times table
 * Return: void
 */
void times_table(void)
{
	int n, res, mult;

	for (n = 0; n < 10; n++)
	{
		for (mult = 0; mult < 10; mult++)
		{
			res = n * mult;
			if (mult == 0)
				_putchar(res + '0');
			if (res < 10 && mult != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(res + '0');
			}
			else if (res >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((res / 10) + '0');
				_putchar((res % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
