#include "main.h"

/**
 * get_bit - function returns a bit's value by a given index.
 * @n: string of 0 and 1 chars
 * @index: index of the bit that wanted
 *
 * Return: the value of the bit at index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 64)
	{
		return (-1);
	}
	else
	{
		return (n >> index & 1);
	}
}
