#include <stdio.h>

/**
 * main - print the first 98 fibonnaci numbers
 * starting with 1 and 2
 * Return: Always 0
 */
int main(void)
{
	int cnt;
	unsigned long fib1 = 0, fib2 = 1, sum;
	unsigned long fib1hal1, fib1hal2, fib2hal1, fib2hal2;
	unsigned long half, half2;

	for (cnt = 0; cnt < 92; cnt++)
	{
		sum = fib1 + fib2;
		printf("%lu, ", sum);
		fib1 = fib2;
		fub2 = sum;
	}
	fib1hal1 = fib1 / 10000000000;
	fib2hal1 = fib2 / 10000000000;
	fib1hal2 = fib1 % 10000000000;
	fib2hal2 = fib2 % 10000000000;
	for (cnt = 93; cnt < 99; cnt++)
	{
		half = fib1hal1 + fib2hal1;
		half2 = fib1hal2 + fib2hal2;
		if (fib1hal2 + fib2hal2 > 999999999)
		{
			half += 1;
			half2 %= 10000000000;
		}
		printf("%lu%lu", half, half2);
		if (cnt != 98)
			printf(", ");
		fib1hal1 = fib2hal1;
		fib1hal2 = fib2hal2;
		fib2hal1 = half;
		fib2hal2 = half2;
	}
	printf("\n");
	return (0);
}
