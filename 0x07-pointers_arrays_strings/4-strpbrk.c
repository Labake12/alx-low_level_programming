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
	int index;

	while (*s)
	{
		for (index == 0; accept[index]; index++)
		{
			if (*s == accept[index])
				return (s);
		}
		s++;
	}

	return ('\0');
}
