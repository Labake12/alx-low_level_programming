#include "main.h"

/**
 * cap_string - capitalize all words of a string
 * @str: string
 * Return: `str`
 */

char *cap_string(char *str)
{
	int i, c;
	int call;
	char nots[] = ",;.!?(){}\n\t\" ";

	for (i = 0, call = 0; str[i] != '\0'; i++)
	{
		if (str[0] > 96 && str[0] < 123)
			call = 1;
		for (c = 0; nots[c] != '\0'; c++)
		{
			if (nots[c] == str[i])
				call = 1;
		}

		if (call)
		{
			if (str[i] > 96 && str[i] < 123)
			{
				str[i] -= 32;
				call = 0;
			}
			else if (str[i] > 64 && str[i] < 91)
				call = 0;
			else if (str[i] > 47 && str[i] < 58)
				call = 0;
		}
	}
	return (str);
}


