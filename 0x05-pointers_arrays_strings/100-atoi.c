#include "main.h"

/**
 * _atoi - Changes a string to int
 * @s: string
 * Return: An integer
 */

int _atoi(char *s)
{
	int w = 0, hp = 1, rp = 0;
	unsigned int t = 0;

	while (s[w])
	{
	if (s[w] == 45)
	{
	hp *= -1;
	}
	while (s[w] >= 48 && s[w] <= 57)
	{
		rp = 1;
		t = (t * 10) + (s[w] - '0');
		w++;
	}
	if (rp == 1)
	{
	break;
	}
	w++;
	}
	t *= hp;
	return (t);
}
