#include "main.h"

/**
 * get_endianness - determines endianess of a system
 *
 * Return: 0 for big endian or 1 for little endian
 */
int get_endianness(void)
{
	char *b;
	unsigned int a = 1;

	b = (char *)&a;
	return (*b);
}
