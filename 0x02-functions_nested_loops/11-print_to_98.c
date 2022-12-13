#include <stdio.h>

/**
 * print_to_98 -prints from input to 98
 * @n: number to start from
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
	}
	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("\n");
	}
}
