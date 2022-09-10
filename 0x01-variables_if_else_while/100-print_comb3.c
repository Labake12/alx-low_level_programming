#include <stdio.h>
/**
 * main - Entry point
 *
 * code to print all possible combinations of two digits
 *
 * Return: Always 0 (Success)
 */
int main(void)

{
	int c = 0;
	int first_digit;
	int second_digit;

	while (c <= 99)
	{
		first_digit = ((c / 10) + '0');
		second_digit = ((c % 10) + '0');

		if (first_digit < second_digit)
		{
			putchar(first_digit);
			putchar(second_digit);

			if (c !=  89)
			{
				putchar(',');
				putchar(' ');
			}
		}
		c++;
	}
	putchar('\n');

	return (0);
}
