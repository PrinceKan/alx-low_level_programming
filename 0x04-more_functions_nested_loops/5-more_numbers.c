#include "main.h"
/**
 * more_numbers - prints 10 times the numbers
 *
 * Return: a serie of number 10 times
 */
void more_numbers(void)
{
	int r, l;

	for (r = 0 ; r <= 9 ; r++)
	{
		for (l = 0 ; l <= 14 ; l++)
		{
			if (l >= 10)
			{
				_putchar(l / 10 + '0');
			}
			_putchar(l % 10 + '0');
		}
		_putchar('\n');
	}
}
