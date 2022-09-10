#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - check last digit
 *
 * Return: zero
 */
int main(void)
{
	int n;
	int l;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l = n % 10;
	/* your code goes here */
	if (l > 5)
	{
		/* check if number is positive */
		printf("Last digit of %d is %d and is greater than 5\n", n, l);
	}
	else if (l == 0)
	{ 
		/* check if number is zero */
		printf("Last digit of %d is %d and is 0\n", n, l);
	}
	else
	{
		/* check if number is less than 6 */
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, l);
	}
	return (0);
}
