#include "main.h"

/**
 * _strncat - Concatenates two strings
 * @dest: string input1
 * @src: string input2
 * @n: length of string
 * Return: void
 */

char *_strncat(char *dest, char *src, int n)
{
	int x = 0, y = 0;

	while (dest[x] != '\0')
	{
		x++;
	}
	while (y < n && src[y] != '\0')
	{
		dest[x] = src[y];
		x++;
		y++;
	}
	dest[x] = '\0';
	return (dest);
}
