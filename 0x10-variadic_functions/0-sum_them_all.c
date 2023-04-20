#include "variadic_functions.h"

/**
 * sum_them_all - sums all its arguments
 * @n: number of arguments to sum
 * Return: sum of arguments
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int strt;
	va_list sumarg;
	int sum = 0;

	if (n == 0)
		return (0);
	va_start(sumarg, n);
	for (strt = 0; strt < n; strt++)
	{
		sum += va_arg(sumarg, int);
	}
	va_end(sumarg);
	return (sum);
}
