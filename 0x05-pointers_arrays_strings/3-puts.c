#include "main.h"

/**
 * _puts - Prints a string to stdout
 * @str: string
 */

void _puts(char *str)
{
while (*str != '\0')
	{
	_putchar(*str++);
	}
	_putchar('\n');
}
