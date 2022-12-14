#include <stdio.h>

/**
 * main - prints even  fibonacci numbers less
 * than 4000000
 * Return: Always 0
 */
int main(void)
{
	unsigned long fib1 = 0, fib2 = 1, fibsum;
	float totsum;

	while (1)
	{
		fibsum = fib1 + fib2;

		if (fibsum > 4000000)
			break;
		if ((fibsum % 2) == 0)
			totsum += fibsum;
		fib1 = fib2;
		fib2 = fibsum;

	}
	printf("%.0f\n", totsum);

	return (0);
}
