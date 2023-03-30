#include "main.h"

/**
 * reverse_array - reverses an array of integers
 * @a: pointer to array
 * @n: no of arrray elements
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int b;
	char tmp;

	n--;
	for (b = 0; b < n; b++, n--)
	{
		tmp = a[b];
		a[b] = a[n];
		a[n] = tmp;
	}
}
