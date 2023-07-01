#include "main.h"

/**
 * print_most_numbers - Prints numbers 0 - 9
 * Return: void
 */

void print_most_numbers(void)
{
	char k;

	for (k = '0'; k <= '9'; k++)
	{
	if (!(k == '2' || k == '4'))
		_putchar(k);
	}
	_putchar('\n');
}
