#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: pointer to string array
 * @c: character to locate
 * Return: firts occurence of character or null if not found
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	else
		return ('\0');
}
