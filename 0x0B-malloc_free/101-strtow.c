#include <stdlib.h>
#include "main.h"

/**
 * count_words - helper function to count the number of words in a string
 * @s: string to evaluate
 *
 * Return: number of words
 */
int count_words(char *s)
{
    int flag, c, w;

    flag = 0;
    w = 0;

    for (c = 0; s[c] != '\0'; c++)
    {
        if (s[c] == ' ')
            flag = 0;
        else if (flag == 0)
        {
            flag = 1;
            w++;
        }
    }

    return w;
}

/**
 * create_word - create a new word from a substring
 * @str: source string
 * @start: start index of the word
 * @end: end index of the word
 *
 * Return: newly allocated word
 */
char *create_word(char *str, int start, int end)
{
    char *word = (char *)malloc(sizeof(char) * (end - start + 1));
    if (word == NULL)
        return NULL;

    int i, j = 0;
    for (i = start; i < end; i++)
    {
        word[j] = str[i];
        j++;
    }
    word[j] = '\0';
    return word;
}

/**
 * strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings (Success) or NULL (Error)
 */
char **strtow(char *str)
{
    int i, k = 0, len = 0, words, c = 0, start, end;

    while (str[len] != '\0')
        len++;

    words = count_words(str);

    if (words == 0)
        return NULL;

    char **matrix = (char **)malloc(sizeof(char *) * (words + 1));
    if (matrix == NULL)
        return NULL;

    for (i = 0; i <= len; i++)
    {
        if (str[i] == ' ' || str[i] == '\0')
        {
            if (c)
            {
                end = i;
                char *word = create_word(str, start, end);
                if (word == NULL)
                    return NULL;

                matrix[k] = word;
                k++;
                c = 0;
            }
        }
        else if (c++ == 0)
        {
            start = i;
        }
    }

    matrix[k] = NULL;

    return matrix;
}

