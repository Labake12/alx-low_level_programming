#include "main.h"

/**
 * infinite_add - adds two integers stored as strings
 *
 * @n1: first integer string to add
 * @n2: second integer string to add
 * @r: array to store resulting string in
 * @size_r: size of array r
 *
 * Return: the summed string in r. If r is too small for the result,
 * return 0;
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int c = 0, index = 0, index2;
	char *s1 = n1, *s2 = n2;

	while (*s1 != 0)
		s1++;
	while (*s2 != 0)
		s2++;
	size_r--;
	r[size_r] = 0;
	s1--;
	s2--;
	while (s2 != n2 - 1 && s1 != n1 - 1)
	{
		r[index] = *s2 - '0' + *s1 + c;
		c = 0;
		if (r[index] > '9')
		{
			c++;
			r[index] -= 10;
		}
		index++;
		s2--;
		s1--;
		if (size_r == index && (s1 != n1 - 1 || s2 != n2 - 1 || c == 1))
			return (0);
	}
	while (s1 != n1 - 1)
	{
		r[index] = *s1 + c;
		c = 0;
		if (r[index] > '9')
		{
			c = 1;
			r[index] -= 10;
		}
		s1--;
		index++;
		if (size_r == index && (s1 != n1 - 1 ||  c == 1))
			return (0);
	}
	while (s2 != n2 - 1)
	{
		r[index] = *s2 + c;
		c = 0;
		if (r[index] > '9')
		{
			c = 1;
			r[index] -= 10;
		}
		s2--;
		index++;
		if (size_r == index && (s2 != n2 - 1 || c == 1))
			return (0);
	}
	if (c == 1)
	{
		r[index] = '1';
		r[index + 1] = 0;
	}
	else
	{
		r[index--] = 0;
	}
	index1 = 0;
	while (index1 <= index)
	{
		c = r[index];
		r[index] = r[index1];
		r[index1] = c;
		index--;
		index1++;
	}
	return (r);
}
