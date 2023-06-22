#include <stdio.h>

/**
 * main - Prints all numbers of base 16 in lowercase
 * followed by anew line
 * Return: 0
 */
int main(void)
{
	int dg;
	char hp;

	for (dg = 0; dg < 10; dg++)
		putchar((dg % 10) + '0');

	for (hp = 'a'; hp <= 'f'; hp++)
		putchar(hp);

	putchar('\n');

	return (0);
}
