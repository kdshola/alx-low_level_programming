#include "main.h"

/**
 * print_alphabet_x10 - Print lower case alphabets 10 times
 * followed by a new line
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	int cnt = 0;
	char alp;

	while (cnt < 10)
	{
		for (alp = 'a'; alp <= 'z'; alp++)
			_putchar(alp);
		_putchar('\n');
		cnt++;
	}
}
