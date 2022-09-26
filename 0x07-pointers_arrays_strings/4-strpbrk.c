#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes.
 *
 * @s: string.
 * @accept: bytes.
 * Return: pointer to the byte in s.
 */
char *_strpbrk(char *s, char *accept)
{
	int b;

	while (*s)
	{
		for (b =0; accept[b]; b++)
		{
			if (*s == accept[b])
				return (s);
		}

		s++;
	}

	return ('\0');
}
