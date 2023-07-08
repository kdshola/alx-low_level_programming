#include "main.h"

/**
 * flip_bits - counts the number of bits needed to flip one number to another
 * @n: number 1
 * @m: number 2
 * Return: bit count required
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int diff_bits;

	for (; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			diff_bits++;
	}
	return (diff_bits);
}
