#include "holberton.h"
/**
 * jack_bauer - prints every minute of the day
 *
 * Return: the hour from 00:00 to 23:59
 */
void jack_bauer(void)
{
	int m;
	int k;

	for (m = 0 ; m <= 23 ; m++)
	{
		for (k = 0 ; k <= 59 ; k++)
		{
			_putchar(m / 10 + '0');
			_putchar(m % 10 + '0');
			_putchar(58);
			_putchar(k / 10 + '0');
			_putchar(k % 10 + '0');
			_putchar('\n');
		}
	}

}
