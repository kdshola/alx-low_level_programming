#include "main.h"

/**
 * binary_to_uint - converts binary to unsigned int
 * @b: pointer to binary string
 * Return: decimal value of binary
 */

unsigned int binary_to_uint(const char *b)
{
	int i, pow;
	unsigned int dec, len;

	if (b == NULL)
		return (0);
	i = len = dec = 0;
	while (b[i] != '\0')
	{
		len++;
		if (b[i] != '1' && b[i] != '0')
			return (0);
		i++;
	}
	pow = 0;
	for (i = (len - 1); i >= 0; i--)
	{
		if (b[i] == '1')
			dec += (1 << pow);
		pow++;
	}
	return (dec);
}
