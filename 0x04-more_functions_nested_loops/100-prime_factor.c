#include <stdio.h>
#include <math.h>

/**
 * main -  finds and prints the largest prime factor
 * of the number 612852475143
 * Return: 0 (Success)
 */

int main(void)
{
	long int p, hp, q;

	p = 612852475143;
	hp = -1;

	while (p % 2 == 0)
	{
		hp = 2;
		p /= 2;
	}
	for (q = 3; q <= sqrt(p); q = q + 2)
	{
		while (p % q == 0)
		{
			hp = q;
			p = p / q;
		}
	}
	if (p > 2)
		hp = p;
	printf("%ld\n", hp);
	return (0);
}
