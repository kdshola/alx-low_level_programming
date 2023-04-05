#include "main.h"

/**
 * _pow_recursion - determines x to the yth power
 * @x: base value
 * @y: power
 * Return: x to the yth power
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (!y)
		return (1);
	else
		return (x * _pow_recursion(x, (y - 1)));
}
