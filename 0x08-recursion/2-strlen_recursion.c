#include "main.h"

/**
 * _strlen_recursion - gets lengrh of string
 * @s: string buffer
 * Return: stringlength
 */

int _strlen_recursion(char *s)
{
	if (!*s)
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
