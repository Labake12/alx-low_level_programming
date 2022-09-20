#include "main.h"

/**
 * rev_string - reverse a string
 * @s: char array string type
 */

void rev_string(char *s)
{
	int i, c, length;
	char h;

	for (i = 0; s[i] != '\0'; i++)
	{
	}

	length = i;
	for (i--, c = 0; c < length / 2; i--, c++)
	{
		h = s[c];
		s[c] = s[i];
		s[i] = h;
	}
}
