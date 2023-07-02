#include <stdio.h>

/**
 * main - Multiples of 3 and 5
 * Their sum
 * Return: 0 (success)
 */

int main(void)
{
	int h, p = 0;

	while (h < 1024)
	{
	if ((h % 3 == 0) || (h % 5 == 0))
	{
	p += h;
	}
	h++;
	}
	printf("%d\n", p);
	return (0);
}
