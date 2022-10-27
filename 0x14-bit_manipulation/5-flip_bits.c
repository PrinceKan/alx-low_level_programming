#include "main.h"

/**
 * flip_bits - returns the number of bits to return when switching
 * from one number to another.
 * @n: value 1
 * @m: value 2
 *
 * Return: number of bits to flip to get from one number to another
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int bit_turn;
	unsigned long int xorop;

	xorop = n ^ m;

	for (bit_turn = 0 ; xorop != 0 ; xorop = xorop >> 1)
	{
		if ((xorop & 1) == 1)
			bit_turn++;
	}
	return (bit_turn);
}
