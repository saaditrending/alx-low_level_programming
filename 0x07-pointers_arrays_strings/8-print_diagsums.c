#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - prints sum of 2 diagonal square matrix of int
 * @a: ponter to an array of integers
 * @size: size of an array
 * Return: 0 (Success)
 */

void print_diagsums(int *a, int size)
{
	int x, y, sum1, sum2;

	sum1 = 0;
	sum2 = 0;
	for (x = 0; x < size; x++)
	{
		for (y = 0; y < size; y++)
		{
			if (x == y)
			{
				sum1 += *(a + x * size + y);
			}
			if (x + y == size - 1)
			{
				sum2 += *(a + x * size + y);
			}
		}
	}
	printf("%d, %d\n", sum1, sum2);
}
