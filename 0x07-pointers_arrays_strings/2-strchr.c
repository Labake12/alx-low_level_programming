#include "main.h"

/**
 * _strchr - locate a character in a string
 * @s: string to be checked
 * @c: character to check for
 *
 * Return: pointer to check in s with c or null
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *(s + i); i++)
	{
		if (*(s + i) == c)
			return (s + i);
	}
	if (*(s + i) == c)
		return (s + i);
}
