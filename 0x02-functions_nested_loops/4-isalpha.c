#include "main.h"

/**
 * _isalpha - program that Checks alphabets
 * @w: be Char returned
 * Return: 1 for alphabet or 0 for anything
 */

int _isalpha(int w)

{
	if ((w >= 65 && w <= 90) || (w >= 97 && w <= 122))
	{
	return (1);
	}
	return (0);
}
