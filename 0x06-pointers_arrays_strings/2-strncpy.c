#include "main.h"

/**
 * _strncpy - Copies a string
 * @dest: string1
 * @src: string2
 * @n: length of string
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int d = 0;

	while (d < n && src[d] != '\0')
	{
		dest[d] = src[d];
		d++;
	}
	while (d < n)
	{
		dest[d] = '\0';
		d++;
	}
	return (dest);
}
