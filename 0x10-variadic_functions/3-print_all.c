#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: list of arguments passed to function
 * Return: nothing
 */

void print_all(const char * const format, ...)
{
	int j;
	char *word;
	va_list print;
	int ind;

	va_start(print, format);
	j = 0;
	while (format != NULL && format[j] != '\0')
	{
		ind = 0;
		switch (format[j])
		{
			case 'c':
				printf("%c", va_arg(print, int));
				ind = 1;
				break;
			case 'i':
				printf("%d", va_arg(print, int));
				ind = 1;
				break;
			case 'f':
				printf("%f", va_arg(print, double));
				ind = 1;
				break;
			case 's':
				word = va_arg(print, char *);
				if (word == NULL)
					word = "(nil)";
				printf("%s", word);
				ind = 1;
				break;
		}
		if (format[j + 1] != '\0' && ind == 1)
			printf(", ");
		j++;
	}
	printf("\n");
	va_end(print);
}
