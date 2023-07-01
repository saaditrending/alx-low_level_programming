#include "main.h"

/**
 * print_line - program that makes atraight line in terminal
 * @n: number of times char should be printed
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int x;

		for (x = 1; x <= n; x++)

		{
			_putchar(95);
		}
		_putchar('\n');
	}
}
