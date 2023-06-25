#include "main.h"

/**
 * print_sign -  Prints the sign of number
 * @j: the number checked
 * Return: 1, -1, 0 if n is is greater, less than or equal zero
 */

int print_sign(int j)

{
	if (j > 0)
	{
		_putchar('+');
		return (1);
	}
	if (j < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
