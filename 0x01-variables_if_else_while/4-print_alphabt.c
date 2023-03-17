#include <stdio.h>

/**
 * main - Entry point
 * Prints lower case letters except q and e
 * Return:  void
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c == 'e' || c == 'q')
		{
			c++;
			continue;
		}
		putchar(c);
	}
	putchar('\n');
	return (0);
}
