#include "main.h"

/**
 * clear_bit - clears bit at given index of an integer
 * @n: integer
 * @index: index of bit
 * Return: 1 else 0 on failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int shift;

	if (index > 63)
		return (-1);
	shift = 1 << index;
	if (*n & m)
		*n ^= m;
	return (1);
}
