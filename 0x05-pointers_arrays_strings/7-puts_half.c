#include "main.h"

/**
 * puts_half - Prints second half of  a string
 * @str: String
 */

void puts_half(char *str)
{
	int m = 0, n;

	while (str[m] != '\0')
	{
		m++;
	}
	if (m % 2 == 1)
	{
		n = (m - 1) / 2;
		n += 1;
	}
	else
	{
		n = m / 2;
	}
	for (; n < m; n++)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}
