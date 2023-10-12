#include <stdio.h>

/**
 * print_to_98 - Print all natural numbers from n to 98.
 * @n: The starting number.
 */
{
	if (n <= 98)
	{
		int i;

		for (i = n; i <= 98; i++)
		{
			if (i < 98)
			{
				printf("%d, ", i);
			}
			else
			{
				printf("%d\n", i);
			}
		}
	}
	else
	{
		int i;

		for (i = n; i >= 98; i--)
		{
			if (i > 98)
			{
				printf("%d, ", i);
			}
			else
			{
				printf("%d\n", i);
			}
		}
	}
}
