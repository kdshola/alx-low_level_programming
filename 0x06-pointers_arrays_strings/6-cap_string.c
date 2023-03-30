#include "main.h"

/**
 * cap_string - capitalizes all words in a string
 * @ptr: pointer to the string
 * Return: pointer to the string
 */

char *cap_string(char *ptr)
{
	int m;

	for (m = 0; *(ptr + m); m++)
	{
		if (ptr[m] >= 'a' && ptr[m] <= 'z')
		{
			if (m == 0)
				ptr[m] -= 32;
			if (*(ptr + m - 1) == ' ' || ptr[m - 1] == ','
					|| ptr[m - 1] == ';'
					|| ptr[m - 1] == '\n'
					|| ptr[m - 1] == '.'
					|| ptr[m - 1] == '!'
					|| ptr[m - 1] == '"'
					|| ptr[m - 1] == '('
					|| ptr[m - 1] == ')'
					|| ptr[m - 1] == '{'
					|| ptr[m - 1] == '}'
					|| ptr[m - 1] == 63
					|| ptr[m - 1] == 9)
				ptr[m] -= 32;
		}
	}
	return (ptr);
}
