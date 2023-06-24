#include "main.h"

/**
 * _isupper - Checks for uppercase char
 * @h: character to be checked
 * Return: 0 or 1
 */

int _isupper(int h)
{
	if (h >= 'A' && h <= 'Z')
		return (1);
	else
		return (0);
}
