#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: integer pointer 1
 * @b: integer pointer 2
 *
 */
void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
