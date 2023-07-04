#include <stdio.h>
#include "main.h"

/**
 * print_chessboard - Prints the chessboard
 * @a: array
 * Return: 0 Always
 */

void print_chessboard(char (*a)[8])
{
	int h, p;

	for (h = 0; h < 8; h++)
	{
		for (p = 0; p < 8; p++)
		{
			printf("%c", a[h][p]);
		}
		printf("\n");
	}
}
