#include <unistd.h>
/**
  * main - Entry point of my code,
  *
  * Return: Always 0
  */


/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
        return (write(1, &c, 1));
}

int main(void)
{
        char str[9] = "_putchar";
        int i = 0;

        while (str[i] != '\0')
        {
                _putchar(str[i]);
                i++;
        }
        _putchar('\n');

        return (0);
}
