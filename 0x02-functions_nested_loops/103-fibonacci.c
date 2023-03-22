#include <stdio.h>

/**
 * main - prints the sum of even fibonnaci numbers less than 4,000,000
 * followed by a new line
 * Return: 0 always
 */
int main(void)
{
	unsigned long fib = 0, fib1 = 1, fisum;
	unsigned long sum = 0;

	while (1)
	{
		fisum = fib + fib1;
		if (fisum > 4000000)
			break;
		if ((fisum % 2) == 0)
			sum += fisum;
		fib = fib1;
		fib1 = fisum;
	}
	printf("%lu\n", sum);
	return (0);
}
