#include "main.h"

/**
 * print_alphabet - print alphabet in lowercase
 * followed by a new line
 */

void print_alphabet(void)
{
	char let;

	for (let = 'a'; let <= 'z'; let++)
	{
		_putchar(let);
	}
	_putchar('\n');
}
