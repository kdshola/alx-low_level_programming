#include "main.h"

/**
 * _memset - a function that fills memory with a constant byte
 * @s: pointer to the memory to fill
 * @b: characters to fill
 * @n: number of bytes to be filled
 * Return: pointer to the filled memory area @s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
