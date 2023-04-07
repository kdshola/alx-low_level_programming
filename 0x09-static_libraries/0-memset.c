#include "main.h"

/**
 * _memset - fills n bytes with a constant byte in buffer pointed to by s
 * @s: pointer to buffer to fill
 * @b: constant byte
 * @n: number of bytes in s to fill
 * Return: pointer to buffer
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(s + i) = b;
	return (s);
}
