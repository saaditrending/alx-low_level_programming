#include "main.h"

/**
 * rev_string - Reverse a string
 * @s: string
 */

void rev_string(char *s)
{
	int h = 0, ind = 0;
	char k;

	while (s[ind++])
	h++;
	for (ind = h - 1; ind >= h / 2; ind--)
	{
		k = s[ind];
		s[ind] = s[h - ind - 1];
		s[h - ind - 1] = k;
	}
}
