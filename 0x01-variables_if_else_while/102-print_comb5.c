#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that prints combinations of two-two digits
 * Return: Always 0
 */

int main(void)

{
	int x, y;

	for (x = 0; x <= 98; x++)
	{

	for (y = x + 1; y <= 99; y++)
	{
	putchar((x / 10) + '0');
	putchar((x % 10) + '0');
	putchar(' ');
	putchar((y / 10) + '0');
	putchar((y % 10) + '0');
	if (x == 98 && y == 99)
	continue;
	putchar(',');
	putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}
