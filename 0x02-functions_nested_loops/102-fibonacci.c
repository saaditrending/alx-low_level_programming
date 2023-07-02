#include <stdio.h>

/**
 * main - Prints the first 50 Fibanacci numbers
 * starting with 1 and 2
 * Return: 0 (success)
 */

int main(void)
{
	int p = 0;
	long q = 1, r = 2;

	while (p < 50)
	{
	if (p == 0)
		printf("%ld", q);
	else if (p == 1)
		printf(", %ld", r);
	else
	{
	r += q;
	q = r - q;
		printf(", %ld", r);
	}
	p++;
	}
	printf("\n");
	return (0);
}
