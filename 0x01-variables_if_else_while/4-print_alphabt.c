#include <stdio.h>

/**
 * main - print all letters except q and e
 * followed by a mew line
 * Return: Always 0
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'e' && ch != 'q')
		putchar(ch);
	}
	putchar('\n');

return (0);
}

