#include "main.h"
#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: Prints "Holberton" followed by a newline character.
 *
 * Return: 0 on success
 */
int main(void)
{
	char holberton[] = "Holberton\n";
	int i;

	for (i = 0; holberton[i] != '\0'; i++)
		write(1, &holberton[i], 1);

	return (0);
}
