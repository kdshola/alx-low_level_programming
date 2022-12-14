#include <stdio.h>

/**
 * main - list all numbers below 1024
 * only multiples of 3 or 5
 * Return: Always 0
 */
int main(void)
{
	int a, mul = 0;

	for (a = 0; a < 1024; a++)
	{
		if ((a % 3) == 0) || ((a % 5) == 0)
			mul += a;
	}
	printf("%d\n", mul);

	return (0);
}
