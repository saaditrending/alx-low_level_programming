#include "main.h"

/**
 * reverse_array - Reverse the content of an array of int
 * @a: Array
 * @n: string length
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int m, p;

	for (m = 0; m < n; m++)
	{
		n--;
		p = a[m];
		a[m] = a[n];
		a[n] = p;
	}
}
