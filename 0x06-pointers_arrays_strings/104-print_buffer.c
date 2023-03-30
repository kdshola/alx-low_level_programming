#include "main.h"
#include <stdio.h>

/**
 * isASCIItoprint - determines printable char
 * @n: integer
 * Return: 1 if true else 0
 */

int isASCIItoprint(int n)
{
	return (n >= 34 && n <= 126);
}

/**
 * printHex10 - prints hexadecimal value for string c in formatted form
 * @c: hex string
 * @start: 1st position
 * @end: last position
 * Return: void
 */
void printHex10(char *c, int start, int end)
{
	int i = 0;

	while (i  < 10)
	{
		if (i < end)
			printf("%02x", c[start + i]);
		else
			printf(" ");
		if (i % 2)
			printf(" ");
		i++;
	}
}

/**
 * printchar - print ascii values for string c formatted to replace
 * non printable '.'
 * @c: string to print
 * @start: start of c
 * @end: end of c
 * Return: void
 */

void printchar(char *c, int start, int end)
{
	int ch, i = 0;

	while (i < end)
	{
		ch = c[i + start];
		if (!isASCIItoprint(ch))
			ch = 46;
		printf("%c", ch);
		i++;
	}
}

/**
 * print_buffer - prints a buffer
 * @b: String
 * @size: size of buffer
 * Return: void
 */

void print_buffer(char *b, int size)
{
	int start, end;

	if (size > 0)
	{
		for (start = 0; start < size; start += 10)
		{
			end = (size - start < 10) ? size - start : 10;
			printf("%08x: ", start);
			printHex10(b, start, end);
			printchar(b, start, end);
			printf("\n");
		}
	}
	else
		printf("\n");
}
