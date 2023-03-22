#include "main.h"

/**
 * print_alphabet - Prints letter a to z
 * followed by a new line
 * Return: Void
 */
void print_alphabet(void)
{
	char alp;

	for (alp = 'a'; alp <= 'z'; alp++)
		_putchar (alp);
	_putchar('\n');
}
