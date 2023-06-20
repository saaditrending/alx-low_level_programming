#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* This program will assign a random number to the variable n each time it is executed. */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* if(n > 0 ; print n */
	return (0);
}
