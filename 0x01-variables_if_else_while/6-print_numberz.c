#include <stdio.h>

/**
 * main - Print single numbers of base 10 starting from zero
 * Return: 0
 */

int main(void)
{
	int hf;

	for (hf = 0; hf < 10; hf++)
		putchar((hf % 10) + '0');
	putchar('\n');
	return (0);
}
