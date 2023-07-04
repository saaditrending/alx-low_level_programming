#include "main.h"

/**
 * _strchr - Locates a char in a string
 * @s: pointer
 * @c: string
 * Return: '\0'
 */

char *_strchr(char *s, char c)
{
	int h;

	for (h = 0; s[h] >= '\0'; h++)
	{
		if (s[h] == c)
			return (s + h);
	}
	return ('\0');
}
