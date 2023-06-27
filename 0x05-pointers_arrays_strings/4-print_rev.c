#include "main.h"
#include <stdio.h>

/**
 * print_rev - prints a string in reverse
 * @s: string
 */

void print_rev(char *s)
{
	int h = 0;

	while (s[h] != '\0')
	{
		h++;
	}
	for (h -= 1; h >= 0; h--)
	{
		_putchar(s[h]);
	}
	_putchar('\n');
}
