#include "main.h"

/**
 * comp_two_str - compares two strings for similarity
 * @s1: pointer to string 1
 * @s2: pointer to string 2
 * @len1: index of string 1
 * @len2: index of string 2
 * Return: 1 if identical else 0
 */

int comp_two_str(char *s1, char *s2, int len1, int len2)
{
	if (*(s1 + len1) == '\0' && *(s2 + len2) == '\0')
		return (1);
	if (s1[len1] == s2[len2])
		return (comp_two_str(s1, s2, len1 + 1, len2 + 1));
	if (s1[len1] == '\0' && s2[len2] == '*' && s2[len2 + 1 != '\0'])
		return (0);
	if (s2[len2] == '*')
		return (comp_two_str(s1, s2, len1, len2 + 1) ||
				comp_two_str(s1, s2, len1 + 1, len2));
	return (0);
}

/**
 * wildcmp - compare two strings
 * @s1: string 1
 * @s2: string 2
 * Return: 1 if identical else 0
 */

int wildcmp(char *s1, char *s2)
{
	return (comp_two_str(s1, s2, 0, 0));
}
