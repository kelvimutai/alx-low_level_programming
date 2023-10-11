#include <unistd.h>

/**
 * _putchar - Writes a character to stdout.
 * @c: The character to be written.
 *
 * Return: (1) on success, (-1) on failure.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * print_alphabet_x10 - Prints lowercase alphabet 10 times follows a newline.
 */
void print_alphabet_x10(void)
{
	int i;
	int j;
	char letter;

	for (i = 0; i < 10; i++)
	{
		letter = 'a';

		for (j = 0; j < 26; j++)
		{
			_putchar(letter);
			letter++;
		}

		_putchar('\n');
	}
}

/**
 * main - Entry point.
 *
 * Return: Always (0) (success).
 */
int main(void)
{
	print_alphabet_x10();
	return (0);
}
