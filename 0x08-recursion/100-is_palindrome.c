#include "main.h"

/**
 * _strlen_rec - finds string length
 * @s: buffet to string
 * Return: string length
 */

int _strlen_rec(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_rec(s + 1));
}

/**
 * rev_str_pal_check - compares string and its reverse for palindrome
 * @s: buffer to string
 * @start: string first index
 * @len: length of string
 * Return: 1 if true else 0
 */

int rev_str_pal_check(char *s, int start, int len)
{
	if (s[start] == s[len])
	{
		if (start == len + 1 || start == len)
			return (1);
		else
			return (rev_str_pal_check(s, start + 1, len - 1));
	}
	else
		return (0);
}

/**
 * is_palindrome - checks for palindrome string
 * @s: pointer to string buffer
 * Return: 1 if trye else 0
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (rev_str_pal_check(s, 0, _strlen_rec(s) - 1));
}
