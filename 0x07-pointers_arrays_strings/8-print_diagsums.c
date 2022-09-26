#include "main.h"
#include<stdio.h>
/**
 * print_diagsums - function that prints sum of two diagonals of square matrix
 *
 *@a: char * pointer to multidimensional array
 *@size: integers
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int lft = size + 1;
	int rght = size - 1;
	int sizetotal = size * size;
	int lp1;
	int lp2;
	int startsize = size * (size - 1);
	int ttl1 = 0;
	int ttl2 = 0;

	for (lp1 = 0; lp1 < sizetotal; lp1 = lp1 + lft)
	{
		ttl1 = ttl1 + a[lp1];
	}
	printf("%d, ", ttl1);
	for (loop2 = startsize; lp2 > 0; lp2 = lp2 - rght)
	{
		ttl2 = ttl2 + a[lp2];
	}
	printf("%d", ttl2);
	printf("\n");
}
