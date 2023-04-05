#include "main.h"

/**
 * _checkroot - checks square root of a number
 * @a: multiplier
 * @num: number to check
 * Return: natural square root of -1
 */

int _checkroot(int a, int num)
{
	if (a * a > num)
		return (-1);
	if (a * a == num)
		return (a);
	return (_checkroot(a + 1, num));
}


/**
 * _sqrt_recursion - calculate square root of a number n
 * @n: number
 * Return: square root of n
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	if (n < 0)
		return (-1);
	return  (_checkroot(1, n));
}
