#include <stdio.h>

/**
 * main - Entry point
 * print all possible combinations of 2 2-digits from 0 - 99
 * Return: 0 Always
 */
int main(void)
{
	int m, n;

	for (m = 0; m < 99; m++)
	{
		for (n = m + 1; n < 100; n++)
		{
			putchar(m / 10 + '0');
			putchar(m % 10 + '0');
			putchar(32);
			putchar(n / 10 + '0');
			putchar(n % 10 + '0');
			if (m == 98 && n == 99)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
