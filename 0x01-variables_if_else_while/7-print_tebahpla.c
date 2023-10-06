#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the lowercase alphabet reversed, follows a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c  = 'z';

	while (c  >= 'a')
	{
		putchar(c);
		c--;
	}

	putchar('\n');

	return (0);
}
