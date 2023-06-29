#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - create random valid passwords
 * for the program 101-crackme.
 * Return: 0 (Success)
 */

int main(void)
{
	char psd[84];
	int a = 0, sum = 0, st, xy;

	srand(time(0));

	while (sum < 2772)
	{
		psd[a] = 33 + rand() % 94;
		sum += psd[a++];
	}

	psd[a] = '\0';

	if (sum != 2772)
	{
		st = (sum - 2772) / 2;
		xy = (sum - 2772) / 2;
		if ((sum - 2772) % 2 != 0)
			st++;
		for (a = 0; psd[a]; a++)
		{
			if (psd[a] >= (33 + st))
			{
				psd[a] -= st;
				break;
			}
		}
		for (a = 0; psd[a]; a++)
		{
			if (psd[a] >= (33 + st))
			{
				psd[a] -= xy;
				break;
			}
		}
	}
	printf("%s", psd);
	return (0);
}
