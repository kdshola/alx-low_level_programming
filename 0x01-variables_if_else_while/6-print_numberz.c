#include <stdio.h>

/**
 * main - Entry point
 * prints 0 to 9
 * Return: 0 Always
 */
int main(void)
{
	int i = 48;

	while (i < 58)
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
