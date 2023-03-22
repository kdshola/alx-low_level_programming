#include "main"

/**
 * print_to_98 - Prints from input number to 98
 * @n: number to start from
 * Return: void
 */
void print_to_98(int n)
{
	int x;

	if (n <= 98)
	{
		for (x = n; x <= 98; x++)
		{
			printf("%d", x);
			if (x < 98)
				printf(", ");
		}
	}
	else if (n >= 98)
	{
		for (x = n; x >= 98; x--)
		{
			printf("%d", x);
			if (x > 98)
				printf(", ");
		}
	}
	printf("\n");
}
