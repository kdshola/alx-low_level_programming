#include <stdio.h>

/**
 * main - print all combinations of given digit
 * followed ny comma amd newline
 * Return: Alwats 0
 */
int main(void)
{
	int com;

	for (com = 0; com <= 9; com++)
	{
		putchar((com % 10) + '0');

		if (com == 9)
			continiue;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');

	return (0);
}

