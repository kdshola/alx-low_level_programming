#include <stdio.h>

/**
 * main - prints first 50 fibonnaci numbers starting with 1 and 2
 *
 * Return: 0 always
 */

int main(void)
{
	int count;
	unsigned long fib = 0, fib1 = 1, sum;

	for (count = 0; count < 50; count++)
	{
		sum = fib + fib1;
		printf("%lu", sum);
		fib = fib1;
		fib1 = sum;
		if (count == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}

