#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - print aiphabet in both upper and lower cases
 * Return: Always (Sucess)
 */

int main(void)

{

	char rp;

	for (rp = 'a'; rp <= 'z'; rp++)
	putchar(rp);

	for (rp = 'A'; rp <= 'Z'; rp++)
	putchar(rp);
	putchar('\n');

	return (0);

}
