#include <stdio.h>

/**
 * main - entry point
 * prints 1 to 9
 * Return: 0 Always
 */
int main(void)
{
	int dig = 0;

	while (dig < 10)
	{
		printf("%d", dig);
		dig++;
	}
	putchar('\n');
	return (0);
}
