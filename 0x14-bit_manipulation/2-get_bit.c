#include "main.h"

/**
 * get_bit - finds value of bit at a given index of a number
 * @index: bit index
 * @n: number
 * Return: bit value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (n == 0 && index < 64)
		return (0);
	if (index <= 63)
		return ((n & (1 << index)) > 0);
	return (-1);
}
