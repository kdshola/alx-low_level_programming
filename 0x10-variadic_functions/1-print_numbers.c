#include "variadic_functions.h"

/**
 * print_numbers - prints a number of arguments
 * @separator: pointer to seperator
 * @n:no of integers to print
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list print;

	va_start(print, n);
	for (; i < n; i++)
	{
		if (separator == NULL || i == (n - 1))
			printf("%d", va_arg(print, int));
		else
			printf("%d%s", va_arg(print, int), separator);
	}
	printf("\n");
}
