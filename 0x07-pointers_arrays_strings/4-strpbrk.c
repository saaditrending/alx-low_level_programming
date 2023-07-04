#include <stdio.h>
#include "main.h"

/**
 * _strpbrk - Searches a string for any of set of bytes
 * @s: string1
 * @accept: string2
 * Return: s or NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int g;

	while (*s != '\0')
	{
		for (g = 0; accept[g] != '\0'; g++)
		{
			if (*s == accept[g])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}

