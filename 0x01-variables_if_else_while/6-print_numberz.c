#include <stdio.h>

/**
 * main - print all decimals from
 * zero to nine
 * Return: Always 0
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		putcha((num % 10) + '0');
	}
	putchar('\n');

	return (0);
}
