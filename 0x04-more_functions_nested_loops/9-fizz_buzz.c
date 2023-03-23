#include <stdio.h>

/**
 * main - prints number 1 to 100. Prints fizzbuzz for multiples of 3 and 5
 * fizz for multiples of 3 and buzz for multiples of 5
 * Return: 0 Always
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
			printf("Fizz");
		else if (i % 5 == 0 && i % 3 != 0)
			printf("Buzz");
		else if (i % 15 == 0)
			printf("FizzBuzz");
		else
			printf("%d", i);
		if (i < 100)
			printf(" ");
	}
	return (0);
}
