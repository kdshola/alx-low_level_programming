#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints sum of diagonals of a matrix
 * @a: pointer to matrix
 * @size: size of matrix
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i, j, l, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		l = (i * size) + i;
		sum1 += *(a + l);
	}
	for (j = 0; j < size; j++)
	{
		l = (j * size) + (size - 1 - j);
		sum2 += *(a + l);
	}
	printf("%d, %d\n", sum1, sum2);
}
