#include "main.h"

/**
 * _atoi - Convert a string to int
 * @s: string
 * Return: An integer
 */

int _atoi(char *s)
{
	int p = 0, q = 1, r = 0;
	unsigned int u = 0;

	while (s[p])
	{
	if (s[p] == 45)
	{
	q *= -1;
	}
	while (s[p] >= 48 && s[p] <= 57)
	{
		q = 1;
		u = (u * 10) + (s[p] - '0');
		p++;
	}
	if (r == 1)
	{
	break;
	}
	p++;
	}
	u *= q;
	return (u);
}
