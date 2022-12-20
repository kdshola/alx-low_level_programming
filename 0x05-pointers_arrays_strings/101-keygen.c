#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generate random valid password for
 * 101-crackme
 * Return: 0
 */
int main(void)
{
	char pass[84];
	int i = 0, sum = 0, d_h1, d_h2;

	srand(time(0));

	while (sum < 2772)
	{
		pass[i] = 33 + rand() % 94;
		sum += pass[i++];
	}
	pass[i] = '\0';

	if (sum != 2772)
	{
		d_h1 = (sum - 2772) / 2;
		d_h2 = (sum - 2772) / 2;
		if ((sum - 2772) % 2 != 0)
			d_h1++;
		for (i = 0; pass[i]; i++)
		{
			if (pass[i] >= (33 + d_h1))
			{
				pass[i] -= d_h1;
				break;
			}
		}
		for (i = 0; pass[i]; i++)
		{
			if (pass[i] >= (33 + d_h2))
			{
				pass[i] -= d_h2;
				break;
			}
		}
	}
	printf("%s", pass);

	return (0);
}
