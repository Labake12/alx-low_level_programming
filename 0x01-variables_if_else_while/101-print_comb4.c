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

	for (first = 48; first <= 57; first++)
	{
		(second = first + 1; second <= 57; second++)
		{
			(third = second + 1; third <= 57; third++)
			{
				putchar(first);
				putchar(second);
				putchar(third);

				if ((first == 55) && (second == first + 1) && (third == second + 1))
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
