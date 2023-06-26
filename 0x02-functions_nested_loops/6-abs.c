#include "main.h"

/**
 * _abs - Computes absolute value of an integer
 * @x: Check for value
 * Return: Abs of number or zero
 */

int _abs(int x)

{
	if (x < 0)
	{
		int abs;

		abs = x * -1;
		return (abs);
	}
	return (x);
}
