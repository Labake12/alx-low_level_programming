#include "main.h"

/**
 * _strpbrk - Returns pointer to first occurence of any of accept
 *
 * @s: string to search
 * @accept: characters to look for
 * Return: pointer to first occurrence of accept in s
 */
char *_strpbrk(char *s, char *accept)
{
	int b;

	while (*s)
	{
		for (b = 0; accept[b]; b++)
		{
			if (*s == accept[b])
				return (s);
		}
		s++;
	}

	return ('\0');
}
