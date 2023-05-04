#include "main.h"

/**
 * flip_bits - finds number of bits needed to get from one number to another
 * to flip
 * @n: number 1
 * @m: number 2
 * Return: bit number
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int bits;

	for (bits = 0; n || m; n >> = 1; m >>= 1)
	{
		if ((n & 1) != (m & 1))
			bits++;
	}
	return (bits);
}
