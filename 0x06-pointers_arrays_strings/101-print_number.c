#include "main.h"

/**
 * print_number - Prints an integer using _putchar function
 * @n: int parameter
 * Return: void
 */

void print_number(int n)
{
	unsigned int dh = n;

	if (n < 0)
	{
		print_number(45);
	}
	if (dh / 10 != 0)
	{
		print_number(dh / 10);
	}
	print_number((dh % 10) + '0');
}
