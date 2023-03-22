#include "main.h"

/**
 * print_last_digit - prints last digit of a number
 * @n: number to print its last digit
 * Return: last digit
 */
int print_last_digit(int n)
{
	int la_dig;

	la_dig = n % 10;
	if (la_dig < 0)
		la_di *= -1;
	_putchar(la_dig + '0');
	return (la_dig);
}
