#include "main.h"

/**
 * string_toupper - change lower case toupper case
 * @s: string
 * Return: char
 */
char *string_toupper(char *s)
{
	int i;

	i = 0;
	while (*(s + 1))
	{
		if (*(s + 1) >= 'a' && *(s + 1) <= 'z')
		{
			*(s + 1) -= 'a' - 'A';
			i++;
		}
	}
		return (s);}
}
