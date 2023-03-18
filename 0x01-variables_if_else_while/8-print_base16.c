#include <stdio.h>

/**
 * main - Entry point
 * Prints all base 16 numbers
 * Return: 0 Always
 */
int main(void)
{
	int i = 0;
	char he = 'a';

	while (i <= 9)
	{
		putchar(i + '0');
		i++;
	}
	while (he <= 'f')
	{
		putchar(he);
		he++;
	}
	putchar('\n');
	return (0);
}
