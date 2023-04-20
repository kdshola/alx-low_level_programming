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

	va_start(string, n);
	for (a = 0; a < n; a++)
	{
		s = va_arg(string, char *);
		if (separator == NULL && s == NULL)
			printf("(nil)");
		else if (separator == NULL && s != NULL)
			printf("%s", s);
		else if (s == NULL && separator != NULL && a < (n - 1))
			printf("(nil)%s", separator);
		else if (a < (n - 1) && s != NULL && separator != NULL)
			printf("%s%s", s, separator);
		else
			printf("%s", s);
	}
	printf("\n");
	va_end(string);
}
