#include "main.h"

/**
 * more_numbers - Print x10 counting numbers below 15
 * Return:void
 */

void more_numbers(void)
{
	int h, p;

	for (h = 1; h <= 10; h++)
	{
		for (p = 0; p <= 14; p++)
		{
			if (p >= 10)
			_putchar('1');
			_putchar(p % 10 + '0');
		}
		_putchar('\n');
	}
}
