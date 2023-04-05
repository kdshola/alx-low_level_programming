#include "main.h"

/**
 * factorial - evaluates factorai of a number
 * @n: number to evaluate
 * Return: factorial 0f n
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	if (n == 1)
		return (1);
	else
		return (n * factorial(n - 1));
}
