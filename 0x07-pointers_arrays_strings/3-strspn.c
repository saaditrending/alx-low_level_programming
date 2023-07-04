#include "main.h"

/**
 * _strspn - Gets the length of a prifix substring
 * @s: pointer
 * @accept: pointer
 * Return: 0 (success)
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int h = 0;
	int p;

	while (*s)
	{
		for (p = 0; accept[p]; p++)
		{
			if (*s == accept[p])
			{
				h++;
				break;
			}
			else if (accept[p + 1] == '\0')
				return (h);
		}
		s++;
	}
	return (h);
}
