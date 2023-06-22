#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program Prints distinct combinations of two digits
 * Return: Always 0 (Sucess)
 */

int main(void)

{
	int h, f;

	for (h = '0'; h < '9'; h++)
	{

	for (f = h + 1; f <= '9'; f++)
	{
	if (f != h)
	{
	putchar(h);
	putchar(f);
	if (h == '8' && f == '9')
	continue;
	putchar(',');
	putchar(' ');
	}
	}
	}
	putchar('\n');
	return (0);
}
