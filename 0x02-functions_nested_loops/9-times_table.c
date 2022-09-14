#include "main.h"

/**
 * times_table -  a function that prints the 9 times table, starting with 0
 * d = digits of current result
 * Return: times table
 */
void times_table(void)
{
	int row, column, d;

	for (row = 0; row <= 9; row++)
	{
		_putchar('0');

		for (column = 1; column <= 9; column++)
		{
			_putchar(',');
			_putchar(' ');

			d = row * column;

			if (d <= 9)
				_putchar(' ');
			else
				_putchar((d / 10) + '0');
			_putchar((d % 10) + '0');
		}
		_putchar('\n');
	}
}
