#include "main.h"

/**
 * _memcpy - Copies memory area
 * @dest: destination pointer
 * @src: source pointer
 * @n: number of bytes
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int h = 0, p = n;

	for (; h < p; h++)
	{
		dest[h] = src[h];
		n--;
	}
	return (dest);
}
