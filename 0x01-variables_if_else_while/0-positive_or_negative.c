#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - a program will assign a random number to the variabl
 * Return : void
 */

int main(void)

{
	int n;

	if(n > 0);
	{
	printf("%d is postive\n", n);
	}
        elseif (n < 0);
	{
	printf("%d is negative\n", n);
	}
	else
	{
        printf("%d is zero\n", n);
	}
	srand(time(0));
	n = rand() - RAND_MAX / 2;
        return (0);
}
