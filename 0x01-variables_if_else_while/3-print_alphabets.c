#include <stdio.h>

/**
 * main - Entry point
 * Prints alphabet in lower case and upper case followed by a new line
 * Return: 0 Always
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	ch = 'A';
	while (ch <= 'Z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
