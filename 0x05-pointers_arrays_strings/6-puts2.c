#include "main.h"

/**
 * puts2 - Prints every char of a string starting with 0
 * @str: String
 * Return: void
 */

void puts2(char *str)
{
	int p, q = 0;

	while (str[q] != '\0')
	{
		q++;
	}
	for (p = 0; p < q; p += 2)
	{
		_putchar(str[p]);
	}
	_putchar('\n');
}
