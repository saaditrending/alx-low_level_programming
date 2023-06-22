#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that prints success combination in business
 * Return: Always 0 (Sucess)
 */

int main(void)

{
	int x, y, z;

	for (x = '0'; x < '9'; x++)
	{

	for (y = x + 1; y <= '9'; y++)
	{

	for (z = y + 1; z <= '9'; z++)
	{
	if ((y != x) != z)
	{
	putchar(x);
	putchar(y);
	putchar(z);
	if (x == '7' && x == '8')
	continue;
	putchar(',');
	putchar(' ');
	}
	}
	}
	}
	putchar('\n');
	return (0);
}
