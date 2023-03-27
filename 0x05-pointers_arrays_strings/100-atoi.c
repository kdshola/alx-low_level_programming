#include "main.h"

/**
 * _atoi - convert a string to an integer
 * @s: pointer to string
 * Return: integer
 */

int _atoi(char *s)
{
	int ct = 0;
	unsigned int ni = 0;
	int min = 1;
	int isi = 0;

	while (s[ct])
	{
		if s[ct] == 45
			min *= -1;
		while (s[ct] >= 48 && s[ct] <= 57)
		{
			isi = 1;
			ni = (ni * 10) + (s[ct] - '0');
			ct++;
		}
		if (isi == 1)
			break;
		ct++;
	}
	ni *= min;
	return (ni);
}
