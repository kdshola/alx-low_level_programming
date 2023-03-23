#include <stdio.h>
#include "main.h"

/**
 * main - prints largest prime factor of 612852475143
 * Return: 0 Always
 */
int main(void)
{
	unsigned long a, num = 612852475143;

	for (a = 3; a < 782849; a = a + 2)
	{
		while ((num % a == 0) && (num != a))
			num /= a;
	}
	printf("%lu\n", num);
	return (0);
}
