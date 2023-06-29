#include "main.h"

/**
 * _strcat - Concatenates two strings
 * @dest: string to be appended
 * @src: string where dest is to be appended
 * Return: void
 */

char *_strcat(char *dest, char *src)
{
	int h = 0, p = 0;

	while (dest[h] != '\0')
	{
		h++;
	}
	while (src[p] != '\0')
	{
		dest[h] = src[p];
		h++;
		p++;
	}
	dest[h] = '\0';
	return (dest);
}
