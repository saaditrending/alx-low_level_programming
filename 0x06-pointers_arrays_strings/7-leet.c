#include "main.h"

/**
 * leet - Encodes string into 1337
 * @s: input
 *
 *Return: s
 */

char *leet(char *s)
{
	int g, h;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (g = 0; s[g] != '\0'; g++)
	{
		for (h = 0; h < 10; h++)
		{
			if (s[g] == s1[h])
			{
				s[g] = s2[h];
			}
		}
	}
	return (s);
}
