#include <stdio.h>

/**
 * main - entry point prints the sum of all multiples of 3 and 5
 * below 1024
 * Return: 0 always
 */
int main(void)
{
	int i, sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
			sum += i;
	}
	printf("%d\n", sum);
	return (0);
}
