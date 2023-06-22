#include <stdio.h>

/**
 * main -program that Print reversed alphabet in lowercase
 * print using putchar
 * Return: 0
 */
int main(void)
{
	char ph;

	for (ph = 'z'; ph >= 'a'; ph--)
	putchar(ph);
	putchar('\n');

	return (0);
}
