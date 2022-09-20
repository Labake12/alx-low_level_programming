#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random passwords for 101-crackme
 * Return: zero
 */

int main(void)
{
	int m;
	int count;
	int total;

	srand(time(NULL));
	for (count = 0, total = 2772; total > 122; count++)
	{
		m = (rand() % 125) + 1;
		printf("%c", m);
		total -= m;
	}
	printf("%c", total);

	return (0);
}
