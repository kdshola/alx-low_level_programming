#include "main.h"

/**
 * rev_string - reverses a string
 * @s: pointer to the string to reverse
 * Return: void
 */

void rev_string(char *s)
{
	int i, len = 0;
	char tmp;

	while (s[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < len / 2; i++)
	{
		tmp = s[len - 1 - i];
		s[len - 1 - i] = s[i];
		s[i] = tmp;
	}
}

