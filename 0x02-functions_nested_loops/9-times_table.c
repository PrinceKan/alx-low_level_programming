#include "main.h"
/**
 * times_table - prints the 9 times table
 *
 * Return: 9 times table
 */
void times_table(void)
{
	int n, p, multi;

	for (n = 0 ; n <= 9 ; n++)
	{
		for (p = 0 ; p <= 9 ; p++)
		{
			multi = n * p;

			if (multi <= 9)
			{
				if (p != 0)
				{
					_putchar(' ');
				}
				_putchar(multi + '0');
			}
			else
			{
				_putchar(multi / 10 + '0');
				_putchar(multi % 10 + '0');
			}
			if (p != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar('\n');
			}
		}
	}
}
