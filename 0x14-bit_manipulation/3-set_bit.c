#include "main.h"

/**
 * set_bit - defines the value of a bit to 1 for a given index
 * @n: string of 0 and 1 chars
 * @index: index of the bit you want to get
 *
 * Return: 1 if it worked or -1 if something went wrong
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
	{
		return (-1);
	}
	else
	{
		*n = *n | 1 << index;
		return (1);
	}
}
