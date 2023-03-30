#include "main.h"

/**
 * leet - encode string into 1337 the small and capital letters aeiou
 * @chr: pointer to string
 *
 * Return: pointer to string
 */

char *leet(char *chr)
{
	int i, j;
	char letr[] = "AaEeOoTtLl";
	char repl[] = "4433007711";

	for (i = 0; chr[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (chr[i] == letr[j])
			{
				chr[i] = repl[j];
				break;
			}
		}
	}
	return (chr);
}
