#include "main.h"

/**
 * _atoi - Convert a string to integer.
 * @s: char array string
 * Description: Number in the string can be preceded by an infinite
 * number of characters.
 * You need to take into account all -/+ signs before the number
 * If there are no numbers in the string, return 0
 * No need to check for overflow.
 * Not allowed to hard-code special values
 * Return: first integer found in string
 */

int _atoi(char *s)
{
	int i;
	int l, m;

	l = 0;
	m = -1;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
			m *= -1;

		if (s[i] > 47 && s[i] < 58)
		{
			if (l < 0)
				l = (l * 10) - (s[i] - '0');
			else
				l = (s[i] - '0') * -1;
		}
	}
	if (m < 0)
		l *= -1;

	return (l);
}
