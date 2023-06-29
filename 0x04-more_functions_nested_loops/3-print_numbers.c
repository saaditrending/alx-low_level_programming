#include "main.h"

/**
 * print_numbers - Prints numbers from 0 to 9
 * Return: void
 */

void print_numbers(void)
{
	char k;

	for (k = '0'; k <= '9'; k++)
	{
		_putchar(k);
	}
	_putchar('\n');
}
