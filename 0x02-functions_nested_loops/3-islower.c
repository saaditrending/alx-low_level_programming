#include "main.h"

/**
 * _islower - program that checks lowercase alphabets
 * @k: Char to be checked
 * Return: 1 for lowercase char or 0 for anything else
 */

int _islower(int k)

{

	if (k >= 97 && k <= 122)
	{
	return (1);
	}
	return (0);
}
