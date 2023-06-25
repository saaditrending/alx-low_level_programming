# include "main.h"

/**
 * print_alphabet_x10 -  program that print _alphabet_x10
 * Return: void
 */

void print_alphabet_x10(void)
{

	char hf;
	int i = 0;

	while (hf <= 9)
	{
	for (hf = 'a'; hf <= 'z'; hf++)
	_putchar(hf);

	_putchar('\n');
	i++;
	}
}
