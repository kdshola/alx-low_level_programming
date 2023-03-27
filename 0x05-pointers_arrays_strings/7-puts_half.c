#include "main.h"

/**
 * puts_half - prints the second half of a string
 * @str: pointer to the string
 * Return: void
 */

void puts_half(char *str)
{
	int i, n, len = 0;

	for (len = 0; str[len] != '\0'; len++)
	{
	}
	n = len / 2;
	if (len % 2 != 0)
		n++;
	for (i = n; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
