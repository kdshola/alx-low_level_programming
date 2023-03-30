#include "main.h"

/**
 * rot13 - enclodes string using rot13
 * @encde: pointer to string
 * Return: pointer to the string
 */

char *rot13(char *encde)
{
	int a, b;
	char alp[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rotalp[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (a = 0; encde[a] != '\0'; a++)
	{
		for (b = 0; b < 52; b++)
		{
			if (encde[a] == alp[b])
			{
				encde[a] = rotalp[b];
				break;
			}
		}
	}
	return (encde);
}
