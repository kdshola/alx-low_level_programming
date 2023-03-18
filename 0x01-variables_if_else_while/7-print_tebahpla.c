#include <stdio.h>

/**
 * main - Entry point
 * Prints alphabets in reverse
 * Return: 0 Always
 */
int main(void)
{
	char i = 'z';

	while (i >= 'a')
	{
		putchar(i);
		i--;
	}
	putchar('\n);
	return (0);
}
