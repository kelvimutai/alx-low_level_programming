#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0.
 */
void times_table(void)
{
	int row, column, product;

	for (row = 0; row <= 9; row++)
	{
		for (column = 0; column <= 9; column++)
		{
			product = row * column;
			if (column > 0)
			{
				putchar(',');
				putchar(' ');
				if (product < 10)
					putchar(' ');
			}
			if (product >= 10)
			{
				putchar((product / 10) + '0');
				putchar((product % 10) + '0');
			}
			else
			{
				putchar(' ');
				putchar(product + '0');
			}
		}
		putchar('\n');
	}
}

int main(void)
{
	times_table();
	return (0);
}
