#include "main.h"

/**
 * print_numbe - Prints an int using only _putchar
 * @n: number of int too be printed
 */

void print_number(int n)
{
	unsigned int h;

	if (n < 0)
	{
		h = -n;
		_putchar(45);
	}
	else
	{
		h = n;
	}
	if (h / 10)
	{
		print_number(h / 10);
	}
	_putchar((h % 10) + '0');
}
