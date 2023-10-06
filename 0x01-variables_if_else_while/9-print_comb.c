#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This function prints all possible combinations of single-digit
 * numbers separated by a comma and a space.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int digit;

	for (digit = 0; digit < 10; digit++)
	{
		if (digit > 0)
		{
			putchar(',');
			putchar(' ');
		}
		putchar('0' + digit);
	}

	putchar('\n');

	return (0);
}
