#include "main.h"

/**
 * set_bit - Sets bit at a given index of an integer
 * @n: number whose bit is to b set
 * @index: index to set bit at
 * Return: 1 on sucess else -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int shift;

	if (index > 63)
		return (-1);
	shift = 1 << index;
	*n = (*n | shift);
	return (1);
}
