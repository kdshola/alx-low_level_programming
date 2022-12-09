#include <stdio.h>

/**
 * main - prints lowercase alphabets
 * followe ny a new line
 * Return: Always 0 (success)
 */
int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'Z'; alpha++)
		putchar(alpha);
	putchar('\n');
	return (0);
}

