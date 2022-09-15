#include "main.h"

/**
 * print_number - prints an interger.
 * @n: number
 */
void print_number(int n)
{
	unsigned int num, num1;
	int i;
	int c = 1;

	if (n < 0)
	{
		n = n * -1;
		_putchar('-');
	}
	num = n;
	num1 = num;
	if (num > 9)
	{
		while (num >= 10)
		{
			c = c * 10;
			num = num / 10;
		}
		_putchar((num1 / c) + '0');
		c = c / 10;

		for (i = c; i >= 1; i = i / 10)
			_putchar((num1 / i) % 10 + '0')
	}
	else
		_putchar(num + '0');
}
