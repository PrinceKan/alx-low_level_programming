#include "main.h"
/**
 * reverse_array - fonction that reverses an array
 * @a: is an array of integers
 * @n: is the number of elements of an array
 *
 */
void reverse_array(int *a, int n)
{
	int i;
	int t;

	i = 0;
	n = n - 1;

	while (i < n)
	{
		t = a[i];
		a[i] = a[n];
		a[n] = t;
		i++;
		n--;
	}
}
