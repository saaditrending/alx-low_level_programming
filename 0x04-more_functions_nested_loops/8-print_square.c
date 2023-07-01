#include "main.h"

/**
 * print_square - Prints a square
 * @size: the square
 */

void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int h, p;

		for (h = 0; h < size; h++)
		{
		for (p = 0; p < size; p++)
		{
			_putchar(35);
		}
		_putchar('\n');
		}
	}
}
