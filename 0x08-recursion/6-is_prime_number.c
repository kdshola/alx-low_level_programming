#include "main.h"

/**
 * check_prime_number - checks for prime number
 * @a: check start
 * @n: number to check
 * Return: 1 if true else 0
 */

int check_prime_number(int a, int n)
{
	if (n == a && n % a == 0)
		return (1);
	if (n % a == 0)
		return (0);
	else
		return (check_prime_number(a + 1, n));
}

/**
 * is_prime_number - determines prime number
 * @n: number to check
 * Return: 1 if true else 0
 */

int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	if (n == 2)
		return (1);
	return (check_prime_number(2, n));
}
