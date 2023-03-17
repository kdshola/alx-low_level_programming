#include <stdio.h>

/**
 * main - Entry point
 * Prints all possible combinations of single digits
 * Return: 0 Always
 */
int main(void)
{
	int i = 48;

	while (i < 58)
	{
		putchar(i);
		if (i < 57)
		{
			putchar(44);
			putchar(32);
		}
		i++;
	}
	putchar('\n');
	return (0);
}
