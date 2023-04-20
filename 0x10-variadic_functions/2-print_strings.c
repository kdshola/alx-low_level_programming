#include "variadic_functions.h"

/**
 * print_strings -prints string followed by a newline
 * @separator: character to be printed between strings
 * @n: number of strings to print
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int a;
	va_list string;
	char *s;

	if (separator == NULL)
		separator = "";
	va_start(string, n);
	for (a = 0; a < n; a++)
	{
		s = va_arg(string, char *);
		if (s == NULL)
			s = "(nil)";
		if (a < n - 1)
			printf("%s%s", s, separator);
		else
			printf("%s", s);
	}
	printf("\n");
	va_end(string);
}
