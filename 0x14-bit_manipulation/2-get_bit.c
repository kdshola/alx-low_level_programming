#include "main.h"

/**
 * get_bit - finds value of bit at a given index of a number
 * @index: bit index
 * @n: number
 * Return: bit value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int a;

	if (n == 0 && index < 64)
		return (0);
	for (a = 0; a <= 63; a++)
	{
		if (index == a)
			return (n & 1);
		n >>= 1;
	}
	return (-1);
}
