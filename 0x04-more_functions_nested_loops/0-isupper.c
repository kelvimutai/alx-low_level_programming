#include "main.h"

/**
 * _isupper - Check if a character is an uppercase letter.
 * @c: The character to check
 * Return: 1 if c is an uppercase letter, 0 otherwise.
 */
int _isupper(int c)
{
    if (c >= 65 && c <= 90)
    {
        return (1);
    }
    return (0);
}
