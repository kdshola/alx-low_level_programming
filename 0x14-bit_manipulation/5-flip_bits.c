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
	unsigned int bits = 0, diff;

	diff = n ^ m;
	while (diff != 0)
	{
		if (diff & 1)
			bits++;
		diff >>= 1;
	}
	return (bits);
}
