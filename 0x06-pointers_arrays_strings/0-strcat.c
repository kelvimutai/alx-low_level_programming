#include "main.h"
#include <stdio.h>

/**
  * _strcat - Concatenates two strings
  * @dest: input value
  * @src: input value
  *
  * Return: void
  */
char *_strcat(char *dest, char *src)
{
	int i = 0, i;

	while (dest[i])
	{
		i++;
	}

	for (i = 0; src[i] != 0; i++)
	{
		dest[i] = src[i];
		i++;
	}

	dest[i] = '\0';
	return (dest);
}
