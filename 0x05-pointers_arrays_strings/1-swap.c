#include "main.h"
#include <stdio.h>

/**
 * swap_int - swaps the values of two integers
 * @a: First integer to be swapped.
 * @b: Second integer to be wapped.
 *
 * Return: Nothing
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
