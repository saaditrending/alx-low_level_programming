#include "main.h"

/**
 * _puts - Prints a string to stdout
 * @str: string
 */

void _puts(char str)
{
	for (; str != '\0'; str++)
	{
		putchar(str);
	}
	putchar('\n');
}
