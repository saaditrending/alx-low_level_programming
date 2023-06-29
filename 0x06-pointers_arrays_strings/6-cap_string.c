#include "main.h"

/**
 * cap_string - Capitalises all words of a string
 * @s: String
 *Return: pointer
 */

char *cap_string(char *s)
{
	int hp = 0;

	while (s[hp])
	{
		while (!(s[hp] >= 'a' && s[hp] <= 'z'))
			hp++;
		if (s[hp - 1] == ' ' ||
		s[hp - 1] == '\t' ||
		s[hp - 1] == '\n' ||
		s[hp - 1] == ',' ||
		s[hp - 1] == ';' ||
		s[hp - 1] == '.' ||
		s[hp - 1] == '!' ||
		s[hp - 1] == '?' ||
		s[hp - 1] == '"' ||
		s[hp - 1] == '(' ||
		s[hp - 1] == ')' ||
		s[hp - 1] == '{' ||
		s[hp - 1] == '}' ||
		hp == 0)
			s[hp] -= 32;
		hp++;
	}
	return (s);
}
