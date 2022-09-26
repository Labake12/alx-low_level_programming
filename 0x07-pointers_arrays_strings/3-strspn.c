#include "main.h"

/**
 * _strspn - gets length of a prefix substring
 * @s: string to be checked
 * @accept: string to check against
 *
 * Return: member of bytes of s in accept
 */
unsigned int _strspn(char *s, char *accept);
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != s[i]; j++)
		{
			if (accept[j] == '\0')
				return (i);
		}
	}
	return (i);
}
