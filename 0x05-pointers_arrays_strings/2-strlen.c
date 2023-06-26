#include <stdio.h>

/**
 * _strlen - Returns the lenth of the string
 * @log: character of the string
 * Return: length of string
 */

size_t _strlen(const char *log)
{
	size_t h = 0;

	while (*log++)
	h++;
	return (h);
}
