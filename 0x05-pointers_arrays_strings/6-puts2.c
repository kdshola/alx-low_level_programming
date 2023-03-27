#include "main.h"

/**
 * puts2 - prints every other character starting with the first character
 * in a string folowed by a newline
 * @str: pointer to string
 * Return: void
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		if (i % 2 == 0)
			_putchar(str[i]);
	_putchar('\n');
}
