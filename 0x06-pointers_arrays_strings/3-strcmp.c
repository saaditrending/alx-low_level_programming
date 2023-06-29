#include "main.h"

/**
 * _strcmp - Compares two strings
 * @s1: string one
 * @s2: string two
 * Return: 0 (Success)
 */

int _strcmp(char *s1, char *s2)
{
	int u = 0;

	while (s1[u] != '\0' && s2[u] != '\0')
	{
		if (s1[u] != s2[u])
		{
		return (s1[u] - s2[u]);
		}
		u++;
	}
	return (0);
}
