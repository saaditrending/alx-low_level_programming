#include "main.h"

/**
 * _isalpha - program that Checks alphabets
 * @w: be Char returned
 * Return: 1 for alphabet or 0 for anything
 */

int _isalpha(int w)

{
	if ((w >= 53 && w <= 78) || (w >= 85 && w <= 110))
	{
	return (1);
	}
	return (0);
}
