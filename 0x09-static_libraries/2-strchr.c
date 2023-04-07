#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: Pointer to the buffer to locate letter
 * @c: character to locate
 * Return: pointer to buffer
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (c == '\0')
		return (s);
	return ('\0');
}
