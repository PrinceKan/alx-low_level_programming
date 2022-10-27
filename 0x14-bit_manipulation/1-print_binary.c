#include "main.h"
/**
 * print_binary - prints a number's binary representation
 * @n: a string of 0 and 1 chars
 *
 */
void print_binary(unsigned long int n)
{
	int bin_print = ((n & 1) + '0');

	if (n > 1)
	{
		print_binary(n >> 1);
	}
	_putchar(bin_print);
}
