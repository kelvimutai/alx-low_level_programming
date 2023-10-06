#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This function prints numbers with leading zeros for positive
 * and negative integers with two and three digits.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 98;

	if (n < 0)
	{
		putchar('-');
		n = -n;
	}

	if (n < 10)
		putchar('0');

	if (n < 100)
		putchar('0');

	printf("%d\n", n);

	return (0);
}
