#include "main.h"

/**
 * _strcpy - Copies the stringto the buffer
 * @src: points string
 * @dest: points buffer
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int e;

	for (e = 0; src[e] != '\0'; e++)
	{
	dest[e] = src[e];
	}
	dest[e++] = '\0';
	return (dest);
}

