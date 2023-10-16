#include "main.h"

/**
  * swap_int - Swaps the values of two integers
  *
  * @i: An integer to swap
  * @c: Another integer to swap
  *
  * Return: void
  */
void swap_int(int *i, int *c)
{
	int aux;

	aux = *i;
	*i = *c;
	*c = aux;
}
