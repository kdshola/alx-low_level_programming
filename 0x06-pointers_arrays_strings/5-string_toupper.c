#include "main.h"

/**
 * string_toupper - converts all lower case to upper case
 * @ch: pointer to string
 * Return: pointer to string
 */

char *string_toupper(char *ch)
{
	int cnt = 0;

	for (; *(ch + cnt); cnt++)
	{
		if (ch[cnt] >= 'a' && ch[cnt] <= 'z')
			*(ch + cnt) -= 32;
	}
	return (ch);
}
