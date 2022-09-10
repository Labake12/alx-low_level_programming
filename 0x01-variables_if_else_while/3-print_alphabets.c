#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: zero
 */
int main(void)
{
	char lower_case;
	char upper_case;
	/* to lowercase */
	for(lower_case = 'a', lower_case <= 'z', lower_case++)
	{
		putchar(lower_case);
	}
	/* to uppercase */
	for(upper_case = 'A', upper_case <= 'Z', upper_case++)
	{
		putchar(upper_case);
	}
	/* new line */
	putchar('\n');
	return(0);
}
