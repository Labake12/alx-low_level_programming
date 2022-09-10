#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: zero
 */
int main(void)
{
	char ch;
	char CH;
	/* to lowercase */
	for(ch = 'a', ch <= 'z', ch++)
	{
		putchar(ch);
	}
	/* to uppercase */
	for(CH = 'A', CH <= 'Z', CH++)
	{
		putchar(CH);
	}
	/* new line */
	putchar('\n');
	return(0);
}
