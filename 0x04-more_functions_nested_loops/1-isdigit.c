#include "main.h"

/**
 * _isdigit - Checks for a postive digit lessthan 9
 * @c: test character
 * Return: 0 and 1
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
