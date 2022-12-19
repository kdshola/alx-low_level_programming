#include "maim.h"

/**
 * _strlen - return string length
 * @s: string
 * Return: length of string
 */
int _strlen(char *s)
{
	int count;

	for (count = 0; *s != '\0'; ++s)
		++count;

	return (count);
}
