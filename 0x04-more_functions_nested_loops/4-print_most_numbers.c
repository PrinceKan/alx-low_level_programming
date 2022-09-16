#include "main.h"
/**
 * print_most_numbers - prints the numbers interleaved
 *
 * Return: numbers
 */
void print_most_numbers(void)
{
	int nbr;

	for (nbr = 48 ; nbr <= 57 ; nbr++)
	{
		if (nbr != 50 && nbr != 52)
		{
			_putchar(nbr);
		}
	}
	_putchar('\n');
}
