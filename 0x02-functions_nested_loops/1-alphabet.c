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
 * print_alphabet - Prints the lowercase alphabet followed by a newline.
 */
void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}

	_putchar('\n');
}

/**
 * main - Entry point.
 *
 * Return: Always (0) (success).
 */
int main(void)
{
	print_alphabet();
	return (0);
}
