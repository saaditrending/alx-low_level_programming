#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - program that assign a random number to the variable n
 * Return: Always 0 (Sucess)
 */

int main(void)
{

	int n;
{
	int n, h;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* yor code goes there */
	h = n % 10;

	if (h > 5)
	{
	printf("Last digit of %d is %d and is greater than 5\n", n, h);
	if (h == 0)
	}
	else if (h == 0)
	{
	printf("Last digit of %d is %d and is 0\n", n, h);
	if (h < 6 && h != 0)
	}
	else if (h < 6 && h != 0)
	{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, h);
	}
	return (0);
}

