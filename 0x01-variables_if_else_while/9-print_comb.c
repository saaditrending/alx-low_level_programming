#include <stdio.h>

/**
 * main - Prints all the combinations of single-digits
 * in ascending order separated by ',' followed by a space
 * Return: 0
 */

int main(void)
{
	int fx;

	for (fx = 0; fx < 10; fx++)
	{
		putchar(fx + '0');
		if (fx < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
