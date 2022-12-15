#include <stdio.h>

/**
 * main - prints 1 - 100 bit print fizz for
 * multiples of three, buzz for multiple of five
 * and fizzbuzz for multiples of 3 and 5
 * Return: Always 0
 */
int main(void)
{
	int i;

	for (i = 0; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FIZZBUZZ");
		else if (i % 3 == 0)
			printf("FIZZ");
		else if (i % 5 == 0)
			printf("BUZZ");
		else if (i == 1)
			printf("%d", i);
		else
			printf(" %d", i);
	}
	printf("\n");

	return (0);
}
