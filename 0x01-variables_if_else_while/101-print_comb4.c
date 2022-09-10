#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)

{
	int first;
	int second;
	int third;

	for (first = 0; first < 9; first++)
	{
		for (second = first + 1; second <= 10; second++)
		{
			for (third = second + 1; third <= 10; third++)
			{
				putchar(first);
				putchar(second);
				putchar(third);

				if ((first == 7) && (second == first + 1) && (third == second + 1))
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
