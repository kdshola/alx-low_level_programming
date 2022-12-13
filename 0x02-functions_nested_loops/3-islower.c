#include "main.h"

/**
 * _islower - checks for lower case
 *
 * Return: 0 if c is lowercase, otherwise 1
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
